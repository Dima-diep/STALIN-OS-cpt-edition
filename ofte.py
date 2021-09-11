#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os
from termcolor import colored

try:
    os.system("clear")
    print(colored("===================", 'cyan', 'on_grey'))
    print(colored("| 1.nano          |", 'red', 'on_grey'))
    print(colored("| 2.vim           |", 'red', 'on_grey'))
    print(colored("| 3.neovim        |", 'red', 'on_grey'))
    print(colored("| 4.mcedit        |", 'red', 'on_grey'))
    print(colored("| 5.micro         |", 'red', 'on_grey'))
    print(colored("| 6.joe           |", 'red', 'on_grey'))
    print(colored("| 7.emacs         |", 'red', 'on_grey'))
    print(colored("| 8.System editor |", 'red', 'on_grey'))
    print(colored("| 9.Exit          |", 'red', 'on_grey'))
    print(colored("===================", 'cyan', 'on_grey'))
    print(colored("Select editor:", 'green', 'on_grey'))
    a = int(input())
    print(colored("Path to file:", 'green', 'on_grey'))
    b = input()

    if a == 1:
        os.system("nano " + b)
    elif a == 2:
        os.system("vim " + b)
    elif a == 3:
        os.system("neovim " + b)
    elif a == 4:
        os.system("mcedit " + b)
    elif a == 5:
        os.system("micro " + b)
    elif a == 6:
        os.system("joe " + b)
    elif a == 7:
        os.system("emacs " + b)
    elif a == 8:
        os.system("termux-open " + b)
    elif a == 9:
        exit
    os.system("clear && python3 /data/data/com.termux/files/chroot/chroot.py")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/chroot.py")
