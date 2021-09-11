#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os
import time
from prettytable import PrettyTable

x = PrettyTable()

try:
    os.system("clear")
    x.field_names = ["N", "Language"]
    x.add_rows(
        [
            [1, "bash"],
            [2, "system shell"],
            [3, "python2"],
            [4, "python3"],
            [5, "ruby"],
            [6, "makefile"],
            [7, "Run compiled C/C++/Rust program"],
            [8, "Run go-lang script"],
            [9, "Compile java program"],
            [10, "Run java program"],
            [11, "Run php program"],
            [12, "Run swift program"],
            [13, "Compile rust program"],
            [14, "cmake"]
            [15, "Exit"],
        ]
    )
    print("Write type:")
    a = int(input())

    if a == 1:
        os.system("clear")
        print("Write full path to script:")
        b = input()
        os.system("bash " + b)
    elif a == 2:
        os.system("clear")
        print("Write full path to script:")
        c = input()
        os.system("/system/bin/sh " + c)
    elif a == 3:
        os.system("clear")
        print("Write full path to script:")
        d = input()
        os.system("python2 " + d)
    elif a == 4:
        os.system("clear")
        print("Write full path to script:")
        e = input()
        os.system("python3 " + e)
    elif a == 5:
        os.system("clear")
        print("Write full path to script:")
        f = input()
        os.system("ruby " + f)
    elif a == 6:
        os.system("clear")
        print("Write directory:")
        g = input()
        print("Write options")
        h = input()
        os.system("cd " + g + " && make " + h)
    elif a == 7:
        os.system("clear")
        print("Write path to program")
        i = input()
        os.system(i)
    elif a == 8:
        os.system("clear")
        print("Write path to script")
        j = input()
        os.system("go run " + j)
    elif a == 9:
        os.system("clear")
        print("Write directory")
        k = input()
        print("Write script")
        l = input()
        os.system("cd " + k + " && javac " + l)
    elif a == 10:
        os.system("clear")
        print("Write path to program")
        m = input()
        os.system("java " + m)
    elif a == 11:
        os.system("clear")
        print("Write path to program")
        n = input()
        os.system("php " + n)
    elif a == 12:
        os.system("clear")
        print("Write path to program")
        o = input()
        os.system("swift " + o)
    elif a == 13:
        os.system("clear")
        print("Write directory")
        p = input()
        print("Write script")
        q = input()
        os.system("cd " + p + " && rustc " + q)
    elif a == 14:
        os.system("Write directory")
        r = input()
        os.system("cd " + r + " && cmake CMakeLists.txt && make")
    elif a == 15:
        os.system("python3 /data/data/com.termux/files/chroot/chroot.py")
except KeyboardInterrupt:
    os.system("clear && python3 /data/data/com.termux/files/chroot/exec.py")
