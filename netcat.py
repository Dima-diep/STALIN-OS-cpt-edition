#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("Write options:")
    a = input()
    print("Write port (1-1024 requires root)")
    b = int(input())
    os.system("ncat " + a + " " + b)
    os.system("clear && python3 /data/data/com.termux/files/chroot/terminal.py")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/terminal.py")
