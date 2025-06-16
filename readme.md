#build

Nucleo_L031K6 board:
```
set ZEPHYR_BASE=c:\users\peter\zephyrproject\zephyr
west build -b nucleo_l031k6 -p auto --sysbuild
```

build for rpi-pico2 board:
```
cd c:\brash\amico\repo\i2c_test_tool
set BOARD_ROOT=c:\brash\amico\repo\i2c_test_tool
set ZEPHYR_BASE=c:\users\peter\zephyrproject\zephyr
west build -b rpi_pico2/rp2350a/m33 
```

Flash for rpi-pico2
```
west flash --openocd "C:\Users\peter\Downloads\openocd-20250613 (1)\OpenOCD-20250613-0.12.0\bin\openocd-rp2350.exe"
```