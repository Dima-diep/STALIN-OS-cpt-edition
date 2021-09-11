#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("Write ruby library:")
    a = input()
    os.system("gem install " + a)
    os.system("python3 /data/data/com.termux/files/chroot/pacman.py")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/ruby.py")
