#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os
from prettytable import PrettyTable

x = PrettyTable()

try:
    os.system("clear")
    x.field_names = ["N", "Type proot"]
    x.add_rows(
        [
            ["1", "atilo"],
            ["2", "proot-distro Termux"],
            ["3", "Andronix OS"],
        ]
    )
    a = int(input())

    if a == 1:
        print("Select your system for login:")
        b = input()
        os.system("python3 /data/data/com.termux/files/usr/bin/atilo run " + b)
        os.system("python3 /data/data/com.termux/files/boot/grub.py")
    elif a == 2:
        os.system("proot-distro list")
        print("Select your system for login:")
        c = input()
        os.system("proot-distro login " + c)
        os.system("python3 /data/data/com.termux/files/boot/grub.py")
    elif a == 3:
        print("Select your system (\"path from ~/\"):")
        d = input()
        os.system("./" + d)
        os.system("python3 /data/data/com.termux/files/boot/grub.py")
except KeyboardInterrupt:
    os.system("python3 /data/data/com.termux/files/boot/proot-sel1.py")
