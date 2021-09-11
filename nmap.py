#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("Write options:")
    a = input()
    print("Write domain/IP")
    b = input()
    os.system("nmap " + a + " " + b)
    os.system("python3 /data/data/com.termux/files/system/terminal.py")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/nmap.py")
