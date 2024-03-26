#!/bin/bash
wget -P . https://github.com/Berthran/alx-low_level_programming/blob/master/0x18-dynamic_libraries/librand.so
export LD_PRELOAD=./librand.so
