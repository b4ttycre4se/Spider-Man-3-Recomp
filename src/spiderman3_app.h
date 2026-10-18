// Spider-Man 3 - ReXGlue recompiled project

#pragma once

#include <filesystem>
#include <memory>

#include <rex/filesystem.h>
#include <rex/rex_app.h>

class Spiderman3App : public rex::ReXApp {
 public:
  using rex::ReXApp::ReXApp;

  static std::unique_ptr<rex::ui::WindowedApp> Create(
      rex::ui::WindowedAppContext& ctx) {
    return std::unique_ptr<Spiderman3App>(
        new Spiderman3App(ctx, "spiderman3", PPCImageConfig));
  }

 protected:
  void OnPreSetup(rex::RuntimeConfig& config) override {
    // Use the same Xenos graphics plugin as the working launch command.
    if (config.gpu_plugin.empty()) {
      config.gpu_plugin = "xenos";
    }
  }

  void OnConfigurePaths(rex::PathConfig& paths) override {
    // Keep an explicitly supplied path when developing.
    if (!paths.game_data_root.empty()) {
      return;
    }

    const auto exe_dir = rex::filesystem::GetExecutableFolder();

    // Release layout: assets beside spiderman3.exe.
    const auto release_assets = exe_dir / "assets";
    if (std::filesystem::is_regular_file(release_assets / "default.xex")) {
      paths.game_data_root = release_assets;
      return;
    }

    // Development layout: exe is in out/build/<preset>; assets are
    // three folders above, in the project root.
    const auto development_assets =
        exe_dir / ".." / ".." / ".." / "assets";
    if (std::filesystem::is_regular_file(development_assets / "default.xex")) {
      paths.game_data_root = development_assets;
    } else {
      // Leave a clear missing-assets error if neither location has the game.
      paths.game_data_root = release_assets;
    }
  }

  void OnPostSetup() override {
    if (auto* game_window = window()) {
      game_window->SetCursorVisibility(
          rex::ui::Window::CursorVisibility::kHidden);
    }
  }

  void OnWindowFocusChanged(bool focused) override {
    rex::ReXApp::OnWindowFocusChanged(focused);
    if (auto* game_window = window()) {
      game_window->SetCursorVisibility(
          focused ? rex::ui::Window::CursorVisibility::kHidden
                  : rex::ui::Window::CursorVisibility::kVisible);
    }
  }
};