# Quantum of Solace: "Client"
"Client" made to improve on the horrible PC port of James Bond: Quantum of Solace, for the multiplayer portion of the game.

## (Current) Features
- Allows for windowed mode
- Allocates external DVAR console

## Planned Features
- FPS Unlock
- Ingame Console (~)
- Allow GSC loading via for example fs_game
- Allow .menu loading

## How to compile, setup, and run

- Run `premake5 vs2022` or use the delivered `premake5.bat`.
- Build via solution file in `build\d3d9-wrapper.sln`.
- Open `d3d9.ini` using a text editor and edit the INI's ``AppEXE`` argument to: ``JB_LiveEngine_s.exe``
- Copy `d3d9.dll` and `d3d9.ini` to the game's folder.
- Create a shortcut to the game, and within the ``Target`` line, add ``-novids -multi`` at the end.

## Credits
Main DLL - [d3d9-wrapper](https://github.com/ThirteenAG/d3d9-wrapper)</br>
Research - [iw4x-sp](https://github.com/XLabsProject/iw4x-sp)</br>
Research - [iw4x](https://github.com/XLabsProject/iw4x-client)</br>
Research - [iw3x0](https://github.com/xoxor4d/iw3xo-dev)</br>


## Disclaimer

This software has been created purely for the purposes of academic research. It is not intended to be used to attack other systems. Project maintainers are not responsible or liable for misuse of the software. Use responsibly.
