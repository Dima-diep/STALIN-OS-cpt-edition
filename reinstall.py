#!/usr/bin/env python3
#! -*- coding: utf-8 -*-
import os

try:
    print("Are you seriously want to reinstall OS? y/n")
    a = input()

    if a == 'y':
        os.system("cd ~/.. && rm -rf boot chroot system .initialize ~/STALIN-OS-cpt-edition && cd ~ && git clone https://github.com/Dima-diep/STALIN-OS-cpt-edition && cd STALIN-OS-cpt-edition && chmod 777 install.sh && bash install.sh && python3 /data/data/com.termux/files/chroot/chroot.py")
    elif a == 'n'
        os.system("clear && python3 /data/data/com.termux/files/system/terminal.py")
    except KeyboardInterrupt: 
        os.system("clear && python3 /data/data/com.termux/files/system/terminal.py")
