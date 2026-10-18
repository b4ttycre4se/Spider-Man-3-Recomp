**Spider-Man 3 Xbox 360 Recomp**

An unofficial recompilation project for the Xbox 360 version of *Spider-Man 3*, built with ReXGlue.

<p align="center">
  <a href="https://en.wikipedia.org/wiki/Spider-Man_3_(video_game)">
    <img src="https://m.media-amazon.com/images/I/51ZwdZAJLpL.jpg"
         alt="Spider-Man 3 Xbox 360 cover art"
         width="300">
  </a>
</p>

**About this build**

This is the first public test build. It is an early work in progress, not a finished or fully compatible release.

In my testing, the game has reached gameplay, completed the Prologue and saved successfully. I haven’t played far enough to know how much of the rest of the game works. I’ll keep playing and testing as far as I can, and I’m hoping to find out how far it gets before a crash or other major problem.

**Performance and known issues**

- Frame rate can drop substantially in busy city scenes and around effects. Stuttering is also present.
- My current theory is that shader compilation or caching contributes to some of the stuttering. Repeated play in an area seemed to make it smoother, but I haven’t proved this is the only cause.
- Thin lines or seams can still show across road surfaces in some views, especially in bright light.
- Compatibility beyond the parts tested so far is unknown. Performance may also vary between PCs.

**What I’d like to work on next**

- Continue testing through the game and note where missions, saving or progression fail.
- Investigate shader stutter and whether any useful shader-warming or pre-compilation approach is possible.
- Investigate the road-surface lines and other graphics issues.
- Test whether a safe 60 FPS option is possible without breaking mission timing or gameplay. There is no 60 FPS option in this build.
- Look into further graphics and quality-of-life settings as the project matures.

These are goals to investigate, not promises about what will be included or when.

**Getting started**

1. Download and extract the Windows x64 test build from the GitHub Releases page when it is published.
2. Put your own extracted game files in the `assets` folder, with `default.xex` directly inside `assets`.
3. Run `spiderman3.exe`.

The game, ISO, XEX and extracted game files are not included. Use only game files you are entitled to use, and don’t upload or send them in bug reports.

**Bug reports and contributions**

Bug reports are very welcome. Please include:

- Where you were in the game and what you were doing.
- What happened, and whether you could reproduce it.
- Your PC’s basic hardware details, if you know them.
- The relevant log, if available. Do not attach game files.

Pull requests are welcome too, especially for focused fixes or improvements. I’m new to recompilation projects, so please explain what your change does and how you tested it.

**Disclaimer**

This is an unofficial fan project and is not affiliated with or endorsed by the game’s rights holders. All game names and related rights belong to their respective owners.
