# ESP32 playground
- blink: simple blinking of LED on GPIO5
- wifi: connecting to pre-defined wifi network

# Usage
<code>
./activate modules/<files you want to compile>
make st
</code>

# INITIAL SETUP
pio boards
pio init --board esp32dev

# DEBUGGING
espefuse.py --port /dev/cu.wchusbserial1420 summary
esptool.py flash_id
https://github.com/espressif/esptool/wiki/SPI-Flash-Modes

# Flash sizes
Initially I had issues with the flash sizes.

https://github.com/espressif/esptool#flash-modes
ESP32	detect, 1MB, 2MB, 4MB, 8MB, 16MB
