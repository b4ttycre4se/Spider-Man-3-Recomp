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

[Download v0.2.1](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases/tag/v0.2.1) · [All releases](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases) · [Report a bug](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/issues) · [Contribute](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/pulls)

</div>

---

**Project status**

v0.2.1 is an early Windows x64 pre-release, not a finished or fully compatible release. In my testing, city performance feels stable with the current 30 FPS configuration. Brief hitches may still occur during shader compilation. I have tested several city areas, saved and reloaded, and have not seen visible graphics errors. The full campaign has not been tested.

**Known issues and future work**

- The current build does not include a 60 FPS mode.
- Brief shader-compilation stutters may still occur.
- Road-surface lines or seams can remain visible in some views, especially in bright light. The v0.2.1 configuration requests 16:1 anisotropic filtering, but this does not remove every seam.
- Mission compatibility and performance later in the campaign are not yet known.
- Future work includes testing a safe 60 FPS option, improving road markings, and continuing stability testing. 60 FPS will need mission-timing checks before it can be considered ready.

These are goals to investigate, not promises about features or dates.

**Getting started**

1. Download and extract the [v0.2.1 Windows pre-release](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases/tag/v0.2.1).
2. Put your own extracted game files in the assets folder, with default.xex directly inside assets.
3. Run spiderman3.exe.

The game, ISO, XEX, and extracted game files are not included. Use game files you are legally entitled to use. Do not upload or send game files in bug reports.

**Experimental performance option**

The included spiderman3.toml enables an experimental D3D12 resolve-readback option intended to reduce stalls. It skips a synchronous wait on a cache miss. If you see corrupted or missing textures, lighting problems, freezes, or other unexpected behavior, set readback_resolve_fast_skip_cache_miss_wait to false in spiderman3.toml and restart.

The v0.2.1 configuration also requests 16:1 anisotropic filtering where eligible textures support it. FXAA is disabled.

**Building and contributing**

The v0.2.1 package continues to use a locally modified ReXGlue SDK checkout. That SDK change is not included in this game repository, so forking this repository alone will not reproduce the performance change. The project setup looks for an installed ReXGlue SDK 0.10.0 or a separately supplied SDK path; see the [SDK configuration](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/blob/main/generated/rexglue.cmake) and [ReXGlue SDK](https://github.com/rexglue/rexglue-sdk).

Pull requests are welcome. Focused changes with a short explanation and test details are especially helpful. For bug reports, include the mission or location, what you were doing, steps to reproduce, and a log or screenshot if available. Reports about how far you get before a crash or mission issue are particularly useful. Do not attach game files.

**Disclaimer**

This is an unofficial fan project and is not affiliated with or endorsed by the game’s rights holders. All game names and related rights belong to their respective owners.
