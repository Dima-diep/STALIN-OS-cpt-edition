#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("1.Git by link")
    print("2.Git by author/repo")
    print("3.Git by command")
    print("Select:")
    a = int(input())

    if a == 1:
        print("Write your link")
        b = input()
        os.system("git clone " + b)
    elif a == 2:
        print("Write author/repo")
        c = input()
        os.system("git clone https://github.com/" + c)
    elif a == 3:
        print("Write link and options")
        d = input()
        os.system("git clone " + d)
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/git.py")
