<div align="center">

**Spider-Man 3 Xbox 360 Recomp**

An unofficial recompilation of the Xbox 360 version of *Spider-Man 3*, built with ReXGlue.

<a href="https://en.wikipedia.org/wiki/Spider-Man_3_(video_game)">
  <img src="https://m.media-amazon.com/images/I/51ZwdZAJLpL.jpg" alt="Spider-Man 3 Xbox 360 cover art" width="260">
</a>

[![Latest test build](https://img.shields.io/github/v/tag/b4ttycre4se/Spider-Man-3-Recomp?label=latest%20test%20build)](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases)
[![Windows x64](https://img.shields.io/badge/platform-Windows%20x64-0078D6?logo=windows&logoColor=white)](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases)
[![Open issues](https://img.shields.io/github/issues/b4ttycre4se/Spider-Man-3-Recomp?label=issues)](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/issues)
[![Pull requests](https://img.shields.io/github/issues-pr/b4ttycre4se/Spider-Man-3-Recomp?label=pull%20requests)](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/pulls)

[Latest Windows build](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases) · [All releases](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases) · [Report a bug](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/issues) · [Contribute](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/pulls)

</div>

---

## Overview

**Spider-Man 3 Xbox 360 Recomp** is an unofficial Windows recompilation project for the Xbox 360 version of *Spider-Man 3*.

The game’s Xbox 360 code is translated ahead of time into C++ and compiled for Windows x64 using the **ReXGlue SDK**. ReXGlue provides the Xbox 360 runtime and compatibility layers, while the game uses a **Direct3D 12** renderer on PC. This is a recompilation project, not a conventional full-console emulator; however, Xbox 360 system and graphics behaviour still needs to be handled, and compatibility work is ongoing.

The aim is to make the Xbox 360 version easier to play on modern Windows PCs while preserving its original lighting, colours, and overall presentation.

## Project status

| Platform | Renderer | Status |
| :--- | :--- | :--- |
| **Windows x64** | **Direct3D 12** | **Playable test build** — the first five missions have been tested by the project author |

The current build has been stable in the areas and missions tested so far. The “pre-release” label means that testing of the full campaign and a wider range of PCs is still ongoing; it does not mean the tested missions are known to be broken.

## Features

| Feature | Details |
| :--- | :--- |
| **Xbox 360 recompilation** | Uses ReXGlue to translate the original game code into a Windows x64 build. |
| **Direct3D 12 rendering** | Runs the game through the project’s Direct3D 12 renderer. |
| **30 FPS and 60 FPS options** | Use the included launcher to select a frame-rate mode. |
| **Original visual presentation** | The lighting and colours are closer to the Xbox 360 version. In the author's view, they look substantially better than the official PC version. |
| **Image-quality settings** | The current configuration uses FXAA, native 2× MSAA, and a 16× anisotropic-filtering override where the texture sampler supports it. |
| **Windows x64 build** | A packaged Windows build is available from the Releases page. |

## Performance and testing

In the project author's recent testing, the game has run close to 60 FPS in most tested areas. Brief stutters can occur while shaders compile, and especially heavy areas may cause smaller frame-rate drops. Performance will vary by PC and scene.

The first five missions have been tested so far, and the missions and cutscenes encountered have worked correctly on the author's system. The full campaign has not yet been verified.

## Known issue

Road markings and road-surface lines can show visual artifacts at certain viewing distances and ground-level angles. They may be less visible when looking down at the road or when standing close to the markings. The cause has not yet been confirmed, and this remains the main graphics issue under investigation.

## What’s next

- Test more missions, cutscenes, and campaign progression.
- Investigate the remaining road-marking issue.
- Continue improving performance in demanding scenes.
- Work toward a more complete launcher and additional quality-of-life features for a future 1.0 release.

These are development goals, not promises of specific features or release dates.

## How to install

1. Download and extract the latest [Windows build](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases).
2. Put your own extracted game files in the `assets` folder, with `default.xex` directly inside it.
3. Keep the FPS launcher, `spiderman3.exe`, `spiderman3.toml`, and required runtime DLLs together in the same folder.
4. Run the launcher and choose 30 FPS or 60 FPS.

No game files are included. Use only game files you are legally entitled to use. Do not upload or send game files in bug reports.

## Help with testing

This is the author's first recompilation project, and help from the community is welcome. Testing across more missions and PCs will help identify compatibility problems before a future 1.0 release.

When reporting an issue, please include:

- The mission or location.
- The selected frame-rate mode.
- What you were doing and how to reproduce the issue.
- A log or screenshot, if available.

People with experience in Xbox 360 graphics, texture filtering, mipmaps, or game recompilation are especially welcome to investigate the remaining road-marking issue. Pull requests and focused technical suggestions are appreciated. **Do not attach game files.**

## Building and contributing

The prebuilt release may use local ReXGlue SDK changes that are not included in this game repository. As a result, cloning this repository alone may not reproduce the exact prebuilt binary. The project setup looks for an installed ReXGlue SDK 0.10.0 or a separately supplied SDK path; see the [SDK configuration](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/blob/main/generated/rexglue.cmake) and the [ReXGlue SDK](https://github.com/rexglue/rexglue-sdk).

Pull requests are welcome. Please include a short explanation of the change and how you tested it.

## Disclaimer

This is an unofficial fan project and is not affiliated with or endorsed by the game’s rights holders. All game names and related rights belong to their respective owners.
