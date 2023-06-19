# DSDBG - Goldhen Plugin for Playstation4

## Versions supported

- Application version:1.00
- Application version:1.11
- Application version:1.15

## Releases supported

#### Dark Souls 3 Original Edition

- CUSA01368 Japan
- CUSA03365 Europe
- CUSA03388 America
- CUSA03434 Australia

#### Dark Souls 3 The Fire Fades Edition

- CUSA07339 Japan
- CUSA07439 Europe
- CUSA07453 Australia
- CUSA08155 America

## Features

- Modifies Dark Souls 3 a FromSoftware game before boot.
- Activates debug camera once the player enters cutscene.
- Activates a way to pause cutscenes from the gamepad.
- Activates developer menu which grants more freedom.
- Redirects lock on target taking control of entity.
- Activates TopMenuDebug in the options menu.
- Additionally framepacing issues were fixed.
- Disables motion blur which caused issues.

## Overworld debug camera

Besides enabling debug camera when entering a cutscene\
there is also a way to enable it from the developer menu.\
By pressing the upper left of the touchpad activates it.\
Navigating to [SYSTEM] option and press circle.\
![DS1](https://user-images.githubusercontent.com/131619524/233867743-fedd7544-a640-4241-a498-8297307e7b7a.jpg)\
Then navigate to [MoveMapStep] and press circle.\
![DS2](https://user-images.githubusercontent.com/131619524/233867756-cdf3c3d5-d3b9-4cb4-be91-69be8989fdd6.jpg)\
Finally navigate to Pause and switch from Off to On.\
![DS3](https://github.com/stagvant/DSDBG/assets/131619524/7630ff9e-2553-4f01-8b74-b54bcde6c309)\
Congratulations you enabled the overworld debug camera!\
While the debug camera is active all entities will freeze.\
By selecting skip option and pressing circle will allow one\
to step through a small number of frames till freezes again.

## TopMenuDebug option

Pressing options button brings up the TopMenu.\
By moving the highlight to the far right will change the description to Debug.\
![DS4](https://user-images.githubusercontent.com/131619524/233867658-c6a80f29-a9d0-44e3-aa32-abad16356454.jpg)\
By pressing debug option brings a menu with some random ideograms.\
![DS5](https://user-images.githubusercontent.com/131619524/233867667-b1e46bb9-cb6c-4732-aad2-b1450eaa534b.jpg)\
Navigating to the indicated option will allow you to fast travel anywhere.

## RemoDebugPause function

Pauses cutscenes by pressing the triangle button.

## Entity manipulation

In order to takeover the control of an entity you have to\
hold down right joystick as if were trying to lock on it.

By the moment you lock on the target the system will\
pass over the controls for manipulating the enemy AI\
Be aware due to the nature of how this mod works you\
will not be able to lock on target normally anymore.

You can get back to the initial entity you\
controlled by holding down left joystick.

## Known Bugs and Issues

Should be mentioned for your own sanity to make sure of turning off the lock-on and\
lock on target from the options menu to prevent passing back and forth of controls.\
Additionally do not wander too far from your default entity or you will get despawned.

## Requirements

- [Goldhen 2.3+](https://github.com/Goldhen/Goldhen) running on a Playstation4 system
- [Fonts and shaders](https://drive.proton.me/urls/99K883B7XG#5L6jlq0yE3yw) for displaying developer menu
- Knowledge on how to make a backup copy of a game
- Knowledge on how to setup a plugin to run properly

## Toolchains used

- [LLVM 10](https://github.com/llvm/llvm-project)
- [GoldHEN_Plugins_SDK](https://github.com/GoldHEN/GoldHEN_Plugins_SDK)
- [OpenOrbis-PS4-Toolchain](https://github.com/OpenOrbis/OpenOrbis-PS4-Toolchain)

## Toolchain authors

- [The LLVM Team](https://github.com/llvm)
- [The Goldhen Team](https://github.com/Goldhen)
- [The OpenOrbis Team](https://github.com/OpenOrbis)

## Consider donating

- [Option1](https://ko-fi.com/stagvant)
- [Option2](https://buymeacoffee.com/stagvant)

## License

DSDBG is released under the [GPLv3 License](https://github.com/stagvant/DSDBG/blob/main/LICENSE).
