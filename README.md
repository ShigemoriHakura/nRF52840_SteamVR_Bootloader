# nRF52840_SteamVR_Bootloader
Just another dirty hack

# How to build bootloader settings
* nrfutil.exe settings generate BootLoaderSettings.hex --family NRF52840 --application Application.hex --application-version 1619830293 --bootloader-version 1550036638 --bl-settings-version 1

# What is needed to flash the chip
* nRFConnect
* SoftDevice.hex
* Bootloader.hex
* BootloaderSettings.hex
* Application.hex

# Why build this?
* Fun
* Modify the application

# Problems:
* Serial is not the same as the steamvr dongle application, so the nrfutil inside steamvr folder cann't be used.