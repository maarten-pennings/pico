# Pico
Playing with the Raspberry Pi Pico.

## C-SDK
My first goal was to setup a Pico development system.
I bought a Pi 400 and installed the SDK.

This first step is documented in the [compile](compile) section.

## Pi 400
I'm relatively new in Linux, so I tried to make a [shortcut](shortcut)
to the "project generator". 

## Debugging
The biggest pain point with the C SDK is the lack of automatic flashing.
Each run cycle requires pressing the BOOTSEL button and then repowering the
Pico. That is very painful.

Luckily, the Pico supports SWD, and a second Pico can server as SWD probe.
I documented my learning curve in [debugging](debugging) chapter.

(end)

