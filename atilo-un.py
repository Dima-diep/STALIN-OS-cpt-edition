#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("Select system for uninstall:")
    a = input()
    os.system("python3 /data/data/com.termux/files/usr/bin/atilo remove " + a)
    os.system("python3 /data/data/com.termux/files/system/system.py")
except KeyboardInterrupt:
    os.system("python3 /data/data/com.termux/files/system/system.py")
