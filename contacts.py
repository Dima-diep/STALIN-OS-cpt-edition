#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os
from termcolor import colored

try:
    os.system("clear && cat /data/data/com.termux/files/chroot/contacts.txt")
    print(colored("=======================", "cyan", "on_grey"))
    print(colored("What do you want to do?", 'cyan', 'on_grey'))
    print(colored("=======================", 'cyan', 'on_grey'))
    print(colored("1.Add contact", 'green', 'on_grey'))
    print(colored("2.Call contact", 'green', 'on_grey'))
    print(colored("=======================", 'cyan', 'on_grey'))
    a = int(input())
    print(colored("Name of contact:", 'red', 'on_grey'))
    b = input()

    if a == 1:
        print(colored("Phone contact", 'red', 'on_grey'))
        c = input()
        os.system("echo \"alias " + b + "=\"termux-telephony-call " + c + "\" >> ~/.bashrc")
        os.system("source ~/.bashrc")
    elif a == 2:
        os.system(b)
    os.system("python /data/data/com.termux/files/chroot/chroot.py")
except KeyboardInterrupt:
    os.system("python /data/data/com.termux/files/chroot/contacts.py")
