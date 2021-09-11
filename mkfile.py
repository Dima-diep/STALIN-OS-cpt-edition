#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("Directory where create:")
    a = input()
    print("File for create:")
    b = input()
    os.system("cd " + a + " && touch " + b)
    os.system("python3 /data/data/com.termux/files/chroot/fileman.py")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/mkfile.py")
