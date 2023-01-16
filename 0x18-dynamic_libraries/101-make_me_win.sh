#!/bin/bash
wget -qO /tmp/play.so https://github.com/izunnamiles/alx-low_level_programming/raw/master/0x18-dynamic_libraries/play.so
export LD_PRELOAD=/tmp/play.so