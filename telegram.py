#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("Do you want to install telegram? y/n")
    a = input()

    if a == 'y':
        os.system("apt install telegram-cli")
    elif a == 'n':
        exit
    os.system("telegram-cli")
    os.system("python3 /data/data/com.termux/files/chroot/chroot.py")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/telegram.py")
