#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("Write path to bash (only bash) script")
    a = input()
    os.system("mv " + a + " ~/../.recovery")
    os.system("python3 /data/data/com.termux/files/system.py")
except KeyboardInterrupt:
    os.system("python3 /data/data/com.termux/files/system/system.py")
