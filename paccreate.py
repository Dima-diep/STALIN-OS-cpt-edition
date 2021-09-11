#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    os.system("clear")
    print("Write directory for package:")
    a = input()
    os.system("cp ~/../system/Manifest.json " + a)
    os.system("nano " + a + "/Manifest.json")
    os.system("cd " + a)
    os.system("termux-create-package Manifest.json")
except KeyboardInterrupt:
    os.system("python3 /data/data/com.termux/files/chroot/paccreate.py")
