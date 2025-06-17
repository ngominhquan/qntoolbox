#build

Nucleo_L031K6 board:
```
set ZEPHYR_BASE=c:\users\peter\zephyrproject\zephyr
west build -b nucleo_l031k6 -p auto --sysbuild
west flash
```

rpi-pico2 board:
```
cd c:\mydev\qntoolbox
set ZEPHYR_BASE=c:\users\peter\zephyrproject\zephyr
west build -b rpi_pico2/rp2350a/m33 
west flash --openocd "C:\Users\peter\Downloads\openocd-20250613 (1)\OpenOCD-20250613-0.12.0\bin\openocd-rp2350.exe"
```

max32625 board
```
set BOARD_ROOT=c:\mydev\qntoolbox
set ZEPHYR_BASE=c:\users\peter\zephyrproject\zephyr
west build -b max32655evkit/max32655/m4 
#not working yet
west build -b max32625pico/max32655/m4