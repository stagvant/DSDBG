# DSDBG - Goldhen Plugin for Playstation4

## Versions supported

Application version:1.00
Application version:1.11
Application version:1.15

## Releases supported

Dark Souls 3 Original Edition
CUSA01368 Japan
CUSA03365 Europe
CUSA03388 America
CUSA03434 Australia

Dark Souls 3 The Fire Fades Edition
CUSA07339 Japan
CUSA07439 Europe
CUSA07453 Australia
CUSA08155 America

## Features

Modifies Dark Souls 3 a FromSoftware game before boot.
Activates debug camera once the player enters cutscene.
Activates a way to pause cutscenes from the gamepad.
Activates developer menu which grants more freedom.
Activates TopMenuDebug in the options menu.
Additionally framepacing issues where fixed.
Disables motion blur which caused issues.

## Overworld debug camera

Besides enabling debug camera when entering a cutscene
there is also a way to enable it from the developer menu.
By pressing the upper left of the touchpad activates developer menu.
Navigating to [SYSTEM] option and press circle.
Then navigate to [MoveMapStep] and press circle.
Finally navigate to Pause and switch from Off to On.
Congrats you enabled the overworld debug camera.
Additionally while the debug camera is active all entities willl freeze.
Skip is under the pause option which once selected and circle is
pressed will unfreeze for a few frames and then freeze again.

## TopMenuDebug option

Pressing options button brings up the TopMenu.
By moving the highlight to the far right will change the description to debug.
By pressing debug option brings a menu with some random ideograms.
Navigating to the indicated option will allow you to fast travel anywhere.

## RemoDebug function

With RemoDebug you can pause cutscenes at will by pressing triangle

## Known Bugs and Issues

If skip function is used while using the overworld debug camera from
the developer menu the screen will flash just as if screenshot is taken.
Do not fret as everything works as intended.

## Requirements

- [Goldhen 2.3+](https://github.com/Goldhen/Goldhen) running on a Playstation4 system
- [Fonts and shaders](https://drive.proton.me/urls/99K883B7XG#5L6jlq0yE3yw) for the developer menu

## Toolchains used

- [LLVM 10](https://llvm.org/)
- [GoldHEN_Plugins_SDK](https://github.com/GoldHEN/GoldHEN_Plugins_SDK)
- [OpenOrbis-PS4-Toolchain](https://github.com/OpenOrbis/OpenOrbis-PS4-Toolchain)

## Credits

- [Everyone at OpenOrbis Team](https://github.com/OpenOrbis)
- [Everyone at Goldhen Team](https://github.com/Goldhen)
Without your toolchains I wouldn't be able to distribute my patches!

## Consider donating

- [Ko-fi](https://ko-fi.com/stagvant)
- [Patreon](https://www.patreon.com/stagvant)
- [Buy me a Coffee](https://www.buymeacoffee.com/stagvant)

## Disclaimer

The source of DSDBG is currently private due to potential improper use.
Although there might be an attempt of reconsidering in the future.

## License

DSDBG is released under the [GPLv3 License](https://github.com/stagvant/DSDBG/blob/main/LICENSE).