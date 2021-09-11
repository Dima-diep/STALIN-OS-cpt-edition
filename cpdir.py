#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("Directory for copy:")
    a = input()
    print("Directory to copy")
    b = input()
    os.system("cp -r " + a + " " + b)
    os.system("clear && python3 /data/data/com.termux/files/chroot/fileman.py")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/fileman.py")
