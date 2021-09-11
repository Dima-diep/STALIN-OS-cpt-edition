#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    os.system("python3 /data/data/com.termux/files/boot/login.py")
    os.system("/data/data/com.termux/files/system/system")
except KeyboardInterrupt:
    os.system("python3 /data/data/com.termux/files/system/system.py")
