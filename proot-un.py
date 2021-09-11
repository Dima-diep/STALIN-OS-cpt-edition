#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("Select system for uninstall:")
    a = input()
    os.system("proot-distro remove " + a)
    os.system("python3 /data/data/com.termux/files/system/system.py")
except KeyboardInterrupt:
    os.system("python3 /data/data/com.termux/files/system/system.py")
