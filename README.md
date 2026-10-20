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

[Latest Windows pre-release](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases) · [All releases](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases) · [Report a bug](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/issues) · [Contribute](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/pulls)

</div>

---

**Project status**

v0.3.0 is an early Windows x64 pre-release, not a finished or fully compatible release. It adds selectable 30 FPS and 60 FPS modes for the Direct3D 12 build. In my testing, the 60 FPS mode reaches around 60 FPS in some tested city areas; brief shader-compilation hitches and scene-dependent drops may still occur. The full campaign and mission compatibility have not been tested.

**Known issues and future work**

- The 30 FPS option is available as a fallback if a mission or timing-sensitive section has problems. Mission behavior at either frame rate is not yet verified.
- Brief shader-compilation stutters may occur.
- Road markings or road-surface lines can look unstable at some viewing distances. This issue remains unresolved.
- Performance varies by scene and PC; 60 FPS is not guaranteed on every system.
- Future work includes mission and campaign testing, improving road-marking behavior, and continued stability testing.

These are goals to investigate, not promises about features or dates.

**Getting started**

1. Download and extract the latest [Windows pre-release](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases).
2. Put your own extracted game files in the assets folder, with default.xex directly inside assets.
3. Keep the FPS launcher, spiderman3.exe, spiderman3.toml, and required runtime DLLs together in the same folder.
4. Run the FPS launcher and choose 30 or 60 FPS.

The game, ISO, XEX, and extracted game files are not included. Use game files you are legally entitled to use. Do not upload or send game files in bug reports.


**Building and contributing**

The v0.3.0 pre-release was built against a local ReXGlue SDK checkout (`0.10.0.25-dev.gca20daf`). Any local SDK modifications required to reproduce the exact prebuilt binary are not yet included in this game repository, so forking this repository alone may not reproduce the identical build. The project setup looks for an installed ReXGlue SDK 0.10.0 or a separately supplied SDK path; see the [SDK configuration](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/blob/main/generated/rexglue.cmake) and [ReXGlue SDK](https://github.com/rexglue/rexglue-sdk).

Pull requests are welcome. Focused changes with a short explanation and test details are especially helpful. For bug reports, include the mission or location, what you were doing, steps to reproduce, and a log or screenshot if available. Reports about how far you get before a crash or mission issue are particularly useful. Do not attach game files.

**Disclaimer**

This is an unofficial fan project and is not affiliated with or endorsed by the game’s rights holders. All game names and related rights belong to their respective owners.
