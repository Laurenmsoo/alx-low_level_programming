#!/bin/bash
wget -P /tmp/ https://raw.github.com./Laurenmsoo/alx-low_level_programming/master/0x18-dynamic_libraries/libjack.so
export LD_PRELOAD=/tmp/libjack.so
