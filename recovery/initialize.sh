#!/bin/bash
cd ~/../system
cmake CMakeLists.txt
make
rm -rf cmake* CMakeCache.txt CMakeFiles Makefile
echo "Recovery has been initialized!"
sleep 5
python3 /data/data/com.termux/files/system/system.py
