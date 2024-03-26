#!/bin/bash
wget -P $HOME https://github.com/Berthran/alx-low_level_programming/blob/master/0x18-dynamic_libraries/librand.so
export LD_PRELOAD=$HOME/librand.so
