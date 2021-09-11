#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    os.system("clear && /data/data/com.termux/files/chroot/terminal")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/terminal.py")
