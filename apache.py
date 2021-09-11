#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os
import time

try:
    print("Write options")
    a = input()
    os.system("apachectl " + a)
    time.sleep(10)
    os.system("clear && python3 /data/data/com.termux/files/chroot/terminal.py")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/terminal.py")
