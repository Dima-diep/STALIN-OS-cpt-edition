#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os
try:
    os.system("clear && /data/data/com.termux/files/chroot/texteditors")
except KeyboardInterrupt:
    os.system("python3 /data/data/com.termux/files/chroot/texteditors.py")
