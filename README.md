# PSoniC Mega Drive Player

USB interface for playing Sega Mega Drive/Genesis [VGM](https://en.wikipedia.org/wiki/Video_game_music) music files with real sound chips (YM2612/YM3438 + SN76489). The project is based on the PSoC5LP integrated device by Cypress Semiconductor (now Infineon Technologies). Specifically, the provided code is designed for the [CY8CKIT-59](https://www.infineon.com/cms/en/product/evaluation-boards/cy8ckit-059/) prototyping board.

## Versions

- SoundTest         :   first test with YM2612
- VGMPlayer_v0.1    :   playback from flash memory (revenge of shinobi VGM)
- VGMPlayer_v0.2    :   playback from flash memory (same of v0.1 with 3 VGMs)
- VGMPlayer_v0.3    :   direct playback from USBFS with IRQ and manual DMA
- VGMPlayer_v0.4    :   playback from USBFS with command buffering and manual DMA (EXPERIMENTAL, NOT TESTED)
- VGMPlayer_v0.5    :   direct playback from USBFS with 44100 tick ISR (EXPERIMENTAL ONLY)
- VGMPlayer_v0.6    :   playback from USBFS with 64-bytes dual-buffering algorithm, 44100 tick ISR, and manual DMA
- VGMPlayer_v0.7    :   playback from USBFS with 64-bytes N-buffering algorithm, 44100 tick ISR, and manual DMA

## Coming soon
- Detailed documentation
- Playback software
- PCB design