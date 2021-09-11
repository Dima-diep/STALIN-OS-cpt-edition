#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os
import time

try:
    print("Write directory:")
    a = input()
    os.system("ls -al " + a)
    time.sleep(10)
    os.system("clear && python3 /data/data/com.termux/files/chroot/fileman.py")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/fileman.py")
