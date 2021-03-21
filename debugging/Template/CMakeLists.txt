# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# initalize pico_sdk from installed location
# (note this can come from environment, CMake cache etc)
set(PICO_SDK_PATH "/home/pi/pico/pico-sdk")

# Pull in Raspberry Pi Pico SDK (must be before project)
include(/home/pi/pico/pico-sdk/external/pico_sdk_import.cmake)

project(UartLed C CXX ASM)

# Initialise the Raspberry Pi Pico SDK
pico_sdk_init()

# Add executable. Default name is the project name, version 0.1
add_executable(UartLed UartLed.c )

pico_set_program_name(UartLed "UartLed")
pico_set_program_version(UartLed "0.1")

pico_enable_stdio_uart(UartLed 1)
pico_enable_stdio_usb(UartLed 0)

# Add the standard library to the build
target_link_libraries(UartLed pico_stdlib)

pico_add_extra_outputs(UartLed)

