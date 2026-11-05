> **Project status:** **Spider-Man 3 X360 Recomp 1.0 Final** is the current release. Further work may be picked up by Second Coat, but that has not been confirmed.

<div align="center">

**Spider-Man 3 Xbox 360 Recomp**

An unofficial recompilation of the Xbox 360 version of *Spider-Man 3*, built with ReXGlue and a dedicated Vulkan renderer.

<a href="https://en.wikipedia.org/wiki/Spider-Man_3_(video_game)">
  <img src="https://m.media-amazon.com/images/I/51ZwdZAJLpL.jpg" alt="Spider-Man 3 Xbox 360 cover art" width="260">
</a>

[![Version 1.0 Final](https://img.shields.io/badge/release-1.0%20Final-brightgreen)](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases)
[![Windows x64](https://img.shields.io/badge/platform-Windows%20x64-0078D6?logo=windows&logoColor=white)](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases)
[![Vulkan](https://img.shields.io/badge/renderer-Vulkan-AC162C?logo=vulkan&logoColor=white)](https://github.com/b4ttycre4se/Spider-Man-3-Recomp)
[![Open issues](https://img.shields.io/github/issues/b4ttycre4se/Spider-Man-3-Recomp?label=issues)](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/issues)
[![Pull requests](https://img.shields.io/github/issues-pr/b4ttycre4se/Spider-Man-3-Recomp?label=pull%20requests)](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/pulls)

[Download version 1.0](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases) · [Report an issue](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/issues) · [Contribute](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/pulls)

</div>

---

## About

**Spider-Man 3 Xbox 360 Recomp** is an unofficial Windows x64 recompilation of the Xbox 360 version of *Spider-Man 3*. ReXGlue recompiles the game code for PC. Version 1.0 adds a project-built Vulkan renderer in place of the previous Xenia-based Xenos GPU rendering plugin.

In my view, this is currently the best way to play the Xbox 360 version on PC. The 1.0 build combines the original game assets with a targeted road-marking correction, 1440p internal rendering, FXAA, and a 60 FPS cap. It remains a recompilation with a compatibility runtime, not a source-code remake.

## Version 1.0 features

- **Dedicated Vulkan renderer** replaces the previous Xenos GPU rendering path.
- **Road-marking seams corrected** with a targeted adjustment to road-texture sampling and mip selection, rather than blur across the whole image.
- **1440p internal resolution** is enabled at 2× the game’s 1280×720 base resolution.
- **FXAA** is enabled on the final image, including the HUD.
- **60 FPS cap** is enabled by default. The cap can be changed in the TOML; no separate launcher is included.
- **Performance work** includes more efficient texture tracking, reduced readbacks, pipeline caching and asynchronous compilation, and ReXGlue runtime fixes.
- **Optional ray-traced reflections** are available on compatible Vulkan GPUs but are disabled by default.
- **Island exploration** can be enabled through an experimental TOML option.

The 60 FPS setting is a cap, not a guarantee of a constant 60 FPS on every PC. Performance varies with hardware, drivers, resolution, and the scene.

## Missions and compatibility

Missions and cutscenes have worked well in testing so far. The full campaign has not been verified across every system. If a mission behaves incorrectly at 60 FPS, report the mission and exact point; a separate 30 FPS build may be added if needed.

## Island exploration

Set `sm3_no_world_bounds = true` in `spiderman3.toml` to remove the invisible boundary and unlock outlying regions, including Liberty, Ellis, and Governors Island. The option is off by default and is experimental; island streaming and mission behavior may vary.

## Download and install

1. Download and extract the Windows x64 package from [Releases](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases).
2. Keep `spiderman3.exe`, the supplied runtime DLLs, `spiderman3.toml`, and `spiderman3_pipelines.bin` together in the same folder.
3. Put your own legally obtained, extracted Xbox 360 game files in the included `assets` folder. Place `default.xex` directly inside it, with the other game files alongside it.
4. Run `spiderman3.exe`.

No game files are included. Do not share or upload game files.

## Thanks to Second Coat

Thank you to the people at **Second Coat** for their help with this release. They are currently working on a new PS2 engine project for *The Getaway*: [Second Coat’s project](https://github.com/SecondCoat/second-coat-london).

Second Coat may pick up further work on this recompilation, but that has not been confirmed.

## SDK status

The ReXGlue SDK currently referenced by this repository is out of date and is not being updated as part of this release. A finalized SDK or consolidated patch set may be shared later, but there is no schedule or commitment. The outdated SDK alone cannot reproduce the 1.0 build.

## Reporting issues and contributing

Please include your operating system, GPU and driver, mission or location, TOML settings, and steps to reproduce a problem. Logs or screenshots are useful. Pull requests and technical feedback are welcome. **Do not attach game files.**

## Disclaimer

This is an unofficial fan project and is not affiliated with or endorsed by the game’s rights holders. All game names, characters, and assets remain the property of their respective owners.
