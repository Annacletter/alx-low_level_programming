#!/bin/bash
wget -P /tmp https://github.com/Annacletter/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nquest.so
export LD_PRELOAD=/tmp/nquest.so
