#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    os.system("clear")
    os.system("/data/data/com.termux/files/chroot/fileman")
except KeyboardInterrupt:
    os.system("python3 /data/data/com.termux/files/chroot/fileman.py")
