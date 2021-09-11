#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("Write options (or run without it):")
    a = input()
    os.system("mitmproxy " + a)
    os.system("python3 /data/data/com.termux/files/chroot/terminal.py")
except KeyboardInterrupt:
    os.system("python3 /data/data/com.termux/files/chroot/terminal.py")
