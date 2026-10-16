**Spider-Man 3 Xbox 360 Recomp**

An unofficial, early-stage recompilation project for the Xbox 360 version of *Spider-Man 3*, using ReXGlue.

<p align="center">
  <a href="https://en.wikipedia.org/wiki/Spider-Man_3_%28video_game%29">
    <img src="https://upload.wikimedia.org/wikipedia/en/1/15/Spider-Man_3_%28video_game%29_cover.png"
         alt="Spider-Man 3 video game cover art"
         width="360">
  </a>
</p>

**Current status**

This is a proof of concept, not a playable release.

- The game passes the initial splash screens and reaches the main-menu stage.
- The main menu is black, but its music plays.
- If left untouched, the idle video becomes visible and plays with sound.
- Moving the controller returns the display to the black menu.
- Performance is very poor in the current debug build.
- There is no ready-to-run release or portable launcher.

**Game data**

This repository does not include the game, an ISO, an XEX, or extracted game files.

For local testing, place your own extracted game files in an `assets/` folder in the project directory. The `assets/` folder is excluded from this repository.

**Running a local development build**

The current Windows x64 debug build needs to be launched with ReXGlue runtime arguments. From the project directory, the command currently looks like this:

```bat
.\out\build\win-amd64-debug\spiderman3.exe --gpu_plugin=xenos --game_data_root="C:\path\to\Spider-Man 3 Recomp\assets"
```

Replace the example path with the full path to your own `assets` folder. Double-clicking the EXE by itself does not currently provide that path. This is a developer-testing command, not a simple player-facing launcher.

**Feedback**

This project is at a very early stage, and behaviour may change. Reproducible bug reports and feedback are welcome. Please do not upload or attach game files, disc images, or extracted game data.

**Disclaimer**

This is an unofficial fan project and is not affiliated with or endorsed by the game's rights holders. No game data is distributed here.