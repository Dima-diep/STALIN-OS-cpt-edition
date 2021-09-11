#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("File for remove:")
    a = input()
    os.system("rm -rf " + a)
    os.system("python3 /data/data/com.termux/files/chroot/fileman.py")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/fileman.py")
