#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    os.system("clear")
    print("Write your packages:")
    a = input()
    os.system("apt remove " + a + " -y && apt autoremove -y")
except KeyboardInterrupt:
    os.system("python3 /data/data/com.termux/files/chroot/pacrem.py")
