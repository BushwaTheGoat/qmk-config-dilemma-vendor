# aliexpress dilemma

**WIP**

**NON WORKING firmware**

Keyboard firmware for hardware inspired by [Bastardkb Dilemma Max](https://bastardkb.com/product/dilemma-max-prebuilt-preorder/) bought on aliexpress.

## Bootloader

Enter the bootloader:
* **Physical reset button**: press the button south of USB2 while plugging in the keyboard


## Modifications from vendor
### info.json
Moved /keyboard.json to /keymaps/default/info.json as the file content is compatible to the definition of a [info.json](https://docs.qmk.fm/reference_info_json) file.

### keymap-drawer
boilerplate for keymap diagram generation (not functional yet and commented out in build.yml)

### .github/workflows
workflows for building firmware on github. uses **meetlab/kafkasplit** as base, as it was documented in vendor readme.


## Keymaps & Layers

![keymap images](keymap-drawer/charybdis.svg)


## Hardware / Photos
![PCB Front](data/images/pcb-front.jpg?raw=true "PCB Front")

![PCB Back](data/images/pcb-back.jpg?raw=true "PCB Back")

![with Cover](data/images/built.jpg?raw=true "with Cover")
