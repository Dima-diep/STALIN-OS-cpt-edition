#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    os.system("python3 /data/data/com.termux/files/boot/login.py")
    os.system("uname -a")
    os.system("/data/data/com.termux/files/boot/grub")
    os.system("/data/data/com.termux/files/boot/select")
except KeyboardInterrupt:
    os.system("python3 /data/data/com.termux/files/boot/grub.py")
