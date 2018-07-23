# ESP32 playground
All examples are in modules/
- base: general functions used/needed across the examples
- blink: simple blinking of LED on GPIO5
- wifi: connecting to pre-defined wifi network
- i2c_scanner: I2C scanner which shows address
- lsm303c: digital compass with lsm303ctr over I2C

# Usage
```
./activate modules/<file(s) you want to compile>
make st
```
PS: The common base functions are always activated,
you don't need to explicitely add them

# Submodules
lsm303c: git@github.com:2ni/lsm303c.git

```
git submodule update
```

# Information used to setup

### INITIAL SETUP
```
pio boards
pio init --board esp32dev

cd lib
git submodule init
git submodule add git@github.com:2ni/lsm303c.git
```

### DEBUGGING
espefuse.py --port /dev/cu.wchusbserial1420 summary
esptool.py flash_id
https://github.com/espressif/esptool/wiki/SPI-Flash-Modes

### Flash sizes
Initially I had issues with the flash sizes.

https://github.com/espressif/esptool#flash-modes
ESP32	detect, 1MB, 2MB, 4MB, 8MB, 16MB
