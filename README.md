# PSoniC Mega Drive Player

PSoniC Mega Drive Player is a USB hardware interface for playing Sega Mega Drive/Genesis/SMS/Game Gear [VGM](https://en.wikipedia.org/wiki/Video_game_music) music files with real sound chips (YM2612/YM3438 + SN76489). The project is based on the PSoC5LP integrated device by Cypress Semiconductor (now Infineon Technologies). Specifically, the provided code is designed for the [CY8CKIT-59](https://www.infineon.com/cms/en/product/evaluation-boards/cy8ckit-059/) prototyping board.


## Features

- Playback of Sega Mega Drive/Genesis/SMS/Game Gear VGMs through real YM2612/YM3438 and SN76489 soundchips;

- Support for both YM2612 mode or YM3438 mode through jumper configurations;

- Audio front-end based on [Mega Amp 2.0 Mini/Base](https://github.com/TRP-Retromods/MegaAmp2Pro) project;

- Filtered/non-filtered modes are selectable through jumpers;

- High (although not 100%) VGM compatibility up to v1.51 specs;

- Compact hardware with minimal BoM (bill of materials). Clock signals for both YM2612 and SN76489 are generated by the PSoC5LP device, thus external programmable clock generators are not needed;

- Complete HW/FW/SW solution with buffering algorithm for minimal lag;    

## Testing

[![PSoniC test video](https://img.youtube.com/vi/piJl4aSTuPQ/0.jpg)](https://www.youtube.com/watch?v=piJl4aSTuPQ)

## Hardware

schematics and photos coming soon...

### 1 - Soundchips mainboard

This is the system's mainboard providing sockets for the soundchips and connectors for other modules.

The connections (blue lines) between the CY8CKIT-59 eval board and the soundchip mainboard are reported in the following diagram:

![pinout](./Docs/pinout.png)

The LED connected to P2.1 can be safely desoldered to slightly improve power consumption.

### 2 - PSoC module

### 3 - Audio configurable module

This provides the mixer and the active filter for left/right channels. The LME49720 high-fidelity audio opamp is used.

6 jumpers (3 per channel) allow to select which Yamaha soundchip to use (YM2612 or YM3438) and filtered/non-filtered mode of the active filter.

WARNING: no power amplifier is provided! For my needs this is the most flexible solution since I use it with a Donner EM1 headphone amplifier or with a preamplified speaker. If this does not suit your needs, feel free to design your own power amp.

## Firmware

### Versions

- SoundTest         :   first test with YM2612
- VGMPlayer_v0.1    :   playback from flash memory (revenge of shinobi VGM)
- VGMPlayer_v0.2    :   playback from flash memory (same of v0.1 with 3 VGMs)
- VGMPlayer_v0.3    :   direct playback from USBFS with IRQ and manual DMA
- VGMPlayer_v0.4    :   playback from USBFS with command buffering and manual DMA (EXPERIMENTAL, NOT TESTED)
- VGMPlayer_v0.5    :   direct playback from USBFS with 44100 tick ISR (EXPERIMENTAL ONLY)
- VGMPlayer_v0.6    :   playback from USBFS with 64-bytes dual-buffering algorithm, 44100 tick ISR, and manual DMA
- VGMPlayer_v0.7    :   playback from USBFS with 64-bytes N-buffering algorithm, 44100 tick ISR, and manual DMA - **Recommended version**

## Software

- [VGM_streamer_buffering](https://github.com/the4lchemist/VGM_streamer_buffering): written in C, minimum lag in VGM playback, no compatibility with VGZ/M3U;
- [VGM_streamer_Py](https://github.com/the4lchemist/VGM_streamer_Py): written in Python, could exhibit lag during playback, fully compatible with VGM/VGZ/M3U.

## Future Developments

- Implementation of 0x9x (DAC stream) commands for playback of homebrew VGMs;
- Audio front-end with PSoC's internal opamps (low-quality version);
- Emulation of Sega PSG for accurate playback of Mega Drive/Genesis VMGs;
- Professional PCB with enclosure;
- Portable version with SD card support.