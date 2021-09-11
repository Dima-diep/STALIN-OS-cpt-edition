#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("Write path to file")
    a = input()
    os.system("termux-open " + a)
    os.system("python3 /data/data/com.termux/files/chroot/chroot.py")
except KeyboardInterrupt:
    os.system("python3 /data/data/com.termux/files/chroot/chroot.py")
