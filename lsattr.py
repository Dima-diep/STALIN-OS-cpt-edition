#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("Write directory: (ex. \"~/*, not ~/\")")
    a = input()
    os.system("lsattr -ad " + a)
    os.system("clear && python3 /data/data/com.termux/files/chroot/fileman.py")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/fileman.py")
