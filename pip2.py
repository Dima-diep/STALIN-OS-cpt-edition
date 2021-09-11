#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    os.system("clear")
    print("Write library:")
    a = input()
    os.system("python2 -m pip install " + a)
    os.system("python3 /data/data/com.termux/files/chroot/pacman.py")
except KeyboardInterrupt:
    os.system("python3 /data/data/com.termux/files/chroot/pip2.py")
