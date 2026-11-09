> **Project status:** **Spider-Man 3 X360 Recomp 1.0.3** is the current release. Further work may be picked up by Second Coat, but that has not been confirmed.

<div align="center">

**Spider-Man 3 Xbox 360 Recomp**

An unofficial recompilation of the Xbox 360 version of *Spider-Man 3*, built with ReXGlue and a dedicated Vulkan renderer.

<a href="https://en.wikipedia.org/wiki/Spider-Man_3_(video_game)">
  <img src="https://m.media-amazon.com/images/I/51ZwdZAJLpL.jpg" alt="Spider-Man 3 Xbox 360 cover art" width="260">
</a>

[![Version 1.0.3](https://img.shields.io/badge/release-1.0.3-brightgreen)](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases)
[![Windows x64](https://img.shields.io/badge/platform-Windows%20x64-0078D6?logo=windows&logoColor=white)](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases)
[![Vulkan](https://img.shields.io/badge/renderer-Vulkan-AC162C?logo=vulkan&logoColor=white)](https://github.com/b4ttycre4se/Spider-Man-3-Recomp)
[![Open issues](https://img.shields.io/github/issues/b4ttycre4se/Spider-Man-3-Recomp?label=issues)](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/issues)
[![Pull requests](https://img.shields.io/github/issues-pr/b4ttycre4se/Spider-Man-3-Recomp?label=pull%20requests)](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/pulls)

[Download version 1.0.3](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases) · [Report an issue](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/issues) · [Contribute](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/pulls)

</div>

---

## About

**Spider-Man 3 Xbox 360 Recomp** is an unofficial Windows x64 recompilation of the Xbox 360 version of *Spider-Man 3*. ReXGlue recompiles the game code for PC. The project uses a dedicated Vulkan renderer.

In my view, this is currently the best way to play the Xbox 360 version on PC. The release combines the original game assets with a road-marking correction, 1440p internal rendering, FXAA, and a 60 FPS cap.

## Version 1.0.3

Version 1.0.3 fixes enemies and objects not being highlighted in Spider Sense mode. The native renderer only ran a BeginVertices draw when D3DDevice_EndVertices was called. D3DDevice_DrawVerticesUP ends its draw inline instead, so every sprite and screen quad NGL drew through it was silently dropped, including the Spider Sense glow overlay. A hook on DrawVerticesUP now finishes those draws, so highlighted enemies and objects show up again. There are no other gameplay, renderer, or performance changes in this update.

## Version 1.0.2

Version 1.0.2 adds a launcher for starting the game. There are no other gameplay, renderer, or performance changes in this update.

## Version 1.0.1

Version 1.0.1 improves compatibility on systems without Resizable BAR (ReBAR) and expands city and island streaming.

- **Resizable BAR compatibility:** Updated shared-memory handling adds support for systems without Resizable BAR.
- **More city streaming slots:** The game can keep 13 regions loaded by default, up from 8. The `sm3_region_slots` setting controls the region count.
- **MEGACITY_STRIP streaming:** `sm3_strip_slots` defaults to 5 additional slots for MEGACITY_STRIP packs.
- **Expanded region tables:** Region heaps and the data-block pool were enlarged. The loaded-region bounds table now contains 48 entries.
- **Island streaming:** `sm3_unlock_islands` is enabled by default. Island cells can stream in when you are within `sm3_island_load_distance` units of the island bounds; the default is 1400.
- **Greater building view distance:** `sm3_building_view_distance` defaults to 1500 units, up from the game's 800-unit view distance.

## Other features

- **Dedicated Vulkan renderer** replaces the previous Xenia-based Xenos GPU rendering plugin.
- **Road markings corrected:** the game’s bilinear filtering blended a pale strip at the edge of the road-lane texture into the markings. The renderer overrides sampling for that texture to prevent the edge bleed without blurring the rest of the image.
- **1440p internal resolution** is enabled at 2× the game’s 1280×720 base resolution.
- **FXAA** is enabled on the final image, including the HUD.
- **60 FPS cap** is enabled by default. Set `sm3_fps_limit` to `30` in `spiderman3.toml` to use 30 FPS.
- **Performance improvements** include more efficient texture tracking, reduced readbacks, pipeline caching and asynchronous compilation, and ReXGlue runtime fixes.
- **Optional ray-traced reflections** are available on compatible Vulkan GPUs but are disabled by default.

## Performance

On my RTX 3050 6 GB, the game runs very smoothly at the included 1440p internal resolution with a 60 FPS cap. In my experience, performance is dramatically better than running the game in Xenia or RPCS3. Results may vary by PC, graphics driver, and scene.

## Missions and compatibility

Missions and cutscenes have worked well in testing so far, though the full campaign has not been verified on every system. If you encounter a mission or cutscene issue at 60 FPS, try setting `sm3_fps_limit` to `30` in the included TOML and report where the problem occurs.

## Island exploration

Island access is enabled by default. The cells stream in as you approach, with the distance controlled by `sm3_island_load_distance`.

**Known limitation:** At the Statue of Liberty and another island, the player character can freeze. The island where you break Scorpion out is fully explorable in this build. Further island work may be included in a future Second Coat release, but that is not confirmed.

## Download and install

1. Download and extract the Windows x64 package from [Releases](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases).
2. Keep the launcher, `spiderman3.exe`, the supplied runtime DLLs, `spiderman3.toml`, and `spiderman3_pipelines.bin` together in the same folder.
3. Put your own legally obtained, extracted Xbox 360 game files in the included `assets` folder. Place `default.xex` directly inside it, with the other game files alongside it.
4. Run the launcher to start the game.

No game files are included. Do not share or upload game files.

## Thanks to Second Coat

Thank you to the people at **Second Coat** for their help with version 1.0.1. They are currently working on a new PS2 engine project for *The Getaway*: [Second Coat’s project](https://github.com/SecondCoat/second-coat-london).

Second Coat may pick up further work on this recompilation, but that has not been confirmed.

## SDK status

The ReXGlue SDK currently referenced by this repository is out of date and is not being updated as part of this release. A finalized SDK or consolidated patch set may be shared later, but there is no schedule or commitment. The outdated SDK alone cannot reproduce the current release.

## Reporting issues and contributing

Please include your operating system, GPU and driver, mission or location, TOML settings, and steps to reproduce a problem. Logs or screenshots are useful. Pull requests and technical feedback are welcome. **Do not attach game files.**

## Disclaimer

This is an unofficial fan project and is not affiliated with or endorsed by the game’s rights holders. All game names, characters, and assets remain the property of their respective owners.
