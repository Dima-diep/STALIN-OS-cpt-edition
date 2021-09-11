#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    os.system("clear")
    print("Write username@host")
    a = input()
    print("Write port (default is 22, write it even its default)")
    b = int(input())
    os.system("ssh " + a + " -p " + b)
    os.system("python3 /data/data/com.termux/files/chroot/chroot.py")
except KeyboardInterrupt:
    os.system("python3 /data/data/com.termux/files/chroot/chroot.py")
