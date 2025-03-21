![riceboard main image](https://github.com/timmPrice/custom-keyboard/blob/main/images/laptop.png)

# Riceboard #

This keyboard is heavily inspired by other split keyboards such as the [ferris sweep](https://github.com/davidphilipbarr/Sweep).
It gets its name because recently I've been interested in *ricing* linux. It needs a better name, I'm open to suggestions.

**Attention** this is a *minimum viable product*, and is  merely an experiment for me to learn the qmk software package, how keyboards work, and to see if I even like using split minimal keyboards.
An improved version with a pcb and nicer case is being worked on! And I have lots of ideas for improvements such as adding some extra keys and better usage of software layers. 
 
## To flash firmware ##

1. Make sure you have **installed** and **setup** QMK 
        [qmk docs](https://docs.qmk.fm/cli)

2. Copy the riceboard firmware directory into your QMK/keyboards directory
        `cp -r riceboard ~/qmk_firmware/keyboards` 

3. to flash each side
        `qmk flash -km default -kb riceboard`

## Schematic ##

![schematic](https://github.com/timmPrice/custom-keyboard/blob/main/schematic/Schematic_riceboard-right.png)

## Parts List ##

- 2x raspberry pi pico
- 2x trrs receiver
- 4 pole trrs cable
- 36x mx style switches I used, like, and would recommend [these](https://kineticlabs.com/switches/gateron/gateron-curry-switches)
- 2x bottom plate 
- 2x top plate
- ~12x brass spacers to support the middle around size M2 * 6 

## Images ##

![riceboard main image](https://github.com/timmPrice/custom-keyboard/blob/main/images/half_close.png)
![riceboard main image](https://github.com/timmPrice/custom-keyboard/blob/main/images/top.png)



