#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("1.chmod")
    print("2.chattr")
    a = int(input())
    print("File for setup")
    b = input()

    if a == 1:
        print("Write options:")
        c = input()
        os.system("chmod " + c + " " + b)
    elif a == 2:
        print("Write options:")
        d = input()
        os.system("chattr " + d + " " + b)
    os.system("clear && python3 /data/data/com.termux/files/chroot/fileman.py")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/fileman.py")
