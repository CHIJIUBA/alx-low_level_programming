#!/bin/bash
wget -P /tmp/ https://github.com/CHIJIUBA/alx-low_level_programming/master/0x18-dynamic_libraries/somerandom.so
export LD_PRELOAD=/tmp/somerandom.so
