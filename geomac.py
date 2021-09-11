#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("Write MAC (BSSID)")
    a = input()
    os.system("geomac " + a)
    os.system("python3 /data/data/com.termux/files/chroot/terminal.py")
except KeyboardInterrupt:
    os.system("python3 /data/data/com.termux/files/chroot/terminal.py")
