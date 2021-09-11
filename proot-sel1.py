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
        os.system("python3 /data/data/com.termux/files/usr/bin/atilo images")
        print("Select your system for install:")
        b = input()
        os.system("python3 /data/data/com.termux/files/usr/bin/atilo pull " + b)
        os.system("python3 /data/data/com.termux/files/usr/bin/atilo run " + b)
        os.system("python3 /data/data/com.termux/files/boot/grub.py")
    elif a == 2:
        os.system("proot-distro list")
        print("Select your system for install:")
        c = input()
        os.system("proot-distro install " + c)
        os.system("proot-distro login " + c)
        os.system("python3 /data/data/com.termux/files/boot/grub.py")
    elif a == 3:
        print("The first installer can install Debian, Kali Linux, Ubuntu, Manjaro , Fedora, Void, openSUSE, Alpine, BackBox")
        print("The second installer can install Debian, Kali Linux, Ubuntu, Manjaro, Void, Parrot OS, Alpine, Fedora")
        print("Select your installer:")
        d = int(input())

        if d == 1:
            os.system("python3 /data/data/com.termux/files/home/Linux-Installer-Termux/linux.py")
        elif d == 2:
            os.system("python3 /data/data/com.termux/files/home/Linux-Installer-Termux/linux2.py")
        os.system("python3 /data/data/com.termux/files/boot/grub.py")
except KeyboardInterrupt:
    os.system("python3 /data/data/com.termux/files/boot/proot-sel1.py")
