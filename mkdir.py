#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("Directory where create:")
    a = input()
    print("Name of new directory:")
    b = input()
    os.system("cd " + a + " && mkdir " + b)
    os.system("python3 /data/data/com.termux/files/chroot/fileman.py")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/mkdir.py")
