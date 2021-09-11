#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("Write your packages:")
    a = input()
    os.system("apt install " + a + " -y")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/inspack.py")
