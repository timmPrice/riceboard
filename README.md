![riceboard main image](https://github.com/timmPrice/custom-keyboard/blob/main/images/laptop.png)

# ==Riceboard== #

It gets its name because recently I've been interested in *ricing* linux. It needs a better name, I'm open to suggestions.

**attention** this is a *minimum viable product*, and is therefore merely an expirament for me to learn the qmk software package and see if I even like using minimal split keyboards
An improved version with a pcb and nicer case is being worked on! I have lots of ideas for improvements such as where I'll be adding some extra keys :joy:

## To flash firmware ##

1. Make sure you have **installed** and **setup** QMK 
        [qmk docs](https://docs.qmk.fm/cli)

2. Copy the riceboard firmware directory into your QMK/keyboards directory
        `cp -r riceboard ~/qmk_firmware/keyboards` 

3. to flash each side
        `qmk flash -km default -kb riceboard`


## Parts List ##

- 2x raspberry pi pico
- 2x trrs receiver
- 4 pole trrs cable
- 36x mx style switches I used and would recommend [switches](https://kineticlabs.com/switches/gateron/gateron-curry-switches)
- 2x bottom plate 
- 2x top plate
- ~12x brass spacers to support the middle around size M2 * 6 

## Images ##

![riceboard main image](https://github.com/timmPrice/custom-keyboard/blob/main/images/half_close.png)
![riceboard main image](https://github.com/timmPrice/custom-keyboard/blob/main/images/top.png)
![riceboard main image](https://github.com/timmPrice/custom-keyboard/blob/main/images/side.png)



