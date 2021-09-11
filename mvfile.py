#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("File for move:")
    a = input()
    print("Directory to move/New filename")
    b = input()
    os.system("mv " + a + " " + b)
    os.system("clear && python3 /data/data/com.termux/files/chroot/fileman.py")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/fileman.py")
