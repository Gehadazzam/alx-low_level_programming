#!/bin/bash
wget -O /tmp/libgiga.so https://raw.githubusercontent.com/Gehadazzam/alx-low_level_programming/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="tmp/libgiga.so"
