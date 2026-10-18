**Spider-Man 3 Xbox 360 Recomp**

An unofficial recompilation project for the Xbox 360 version of *Spider-Man 3*, built with ReXGlue.

<p align="center">
  <a href="https://en.wikipedia.org/wiki/Spider-Man_3_(video_game)">
    <img src="https://m.media-amazon.com/images/I/51ZwdZAJLpL.jpg"
         alt="Spider-Man 3 Xbox 360 cover art"
         width="300">
  </a>
</p>

**First public test build**

[Download the v0.1.0 Windows test build](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases/tag/v0.1.0).

This is an early work in progress, not a finished or fully compatible release. In my testing, the game reached gameplay, completed the Prologue and saved successfully. I haven’t played far enough to know how much of the rest of the game works. I’ll keep playing and testing as far as I can.

**Performance and known issues**

- Frame rate can drop substantially in busy city scenes and around effects. Stuttering is also present.
- My current theory is that shader compilation or caching contributes to some stuttering. Repeated play in an area seemed to make it smoother, but I haven’t proved this is the only cause.
- Thin lines or seams can still appear across road surfaces in some views, especially in bright light.
- Compatibility beyond the parts tested so far is unknown. Performance may vary between PCs.

**What I’d like to work on next**

- Continue testing through the game and note where missions, saving or progression fail.
- Investigate shader stutter and whether shader warming or pre-compilation is possible.
- Investigate the road-surface lines and other graphics issues.
- Test whether a safe 60 FPS option is possible without breaking mission timing or gameplay. There is no 60 FPS option in this build.
- Explore further graphics and quality-of-life settings.

These are goals to investigate, not promises about what will be included or when.

**Getting started**

1. Download and extract the Windows x64 test build from the [Releases page](https://github.com/b4ttycre4se/Spider-Man-3-Recomp/releases).
2. Put your own extracted game files in the `assets` folder, with `default.xex` directly inside `assets`.
3. Run `spiderman3.exe`.

The game, ISO, XEX and extracted game files are not included. Don’t upload or send game files in bug reports.

**Bug reports and contributions**

Bug reports are welcome. Please include where you were, what you were doing, what happened, whether you could reproduce it, and the relevant log if available. Don’t attach game files.

Pull requests are welcome, especially for focused fixes or improvements. I’m new to recompilation projects, so please explain what your change does and how you tested it.

**Disclaimer**

This is an unofficial fan project and is not affiliated with or endorsed by the game’s rights holders. All game names and related rights belong to their respective owners.
