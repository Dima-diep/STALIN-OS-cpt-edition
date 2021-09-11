#include <stdio.h>
#include "color.h"

int main() {
	int a;

	printf(ANSI_COLOR_CYAN    "STALIN-OS cpt edition Package Manager v4.3 by Dima-diep" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_CYAN    "=====================================" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 1.ruby2           |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_YELLOW  "| 2.python 2.7      |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 3.rust            |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_YELLOW  "| 4.swift           |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_WHITE   "| 5.c/c++           |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_BLUE    "| 6.golang          |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_BLUE    "| 7.php             |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 8.java            |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_YELLOW  "| 9.javascript      |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_YELLOW  "| 10.javascript-lts |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_YELLOW  "| 11.kotlin         |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_YELLOW  "| 12.julia          |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_CYAN    "| 13.Exit           |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_CYAN    "=====================================" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "Select your compiler: ");
	scanf("%d", &a);

	switch(a) {
		case 1:
		    system("clear && apt install wget -y && mkdir -p $PREFIX/etc/apt/sources.list.d && printf \"deb https://hax4us.github.io/TermuxBlack/ termuxblack main\" > $PREFIX/etc/apt/sources.list.d/termuxblack.list && wget -q https://hax4us.github.io/TermuxBlack/termuxblack.key -O termuxblack.key && apt-key add termuxblack.key && apt update -y && apt upgrade -y && apt install ruby2 -y && python3 /data/data/com.termux/files/chroot/compilers.py");
		    break;
		case 2:
		    system("clear && apt install python2 -y && python3 /data/data/com.termux/files/chroot/compilers.py");
		    break;
		case 3:
		    system("clear && apt install rust rustc-dev rustscan rustanalyzer -y && python3 /data/data/com.termux/files/chroot/compilers.py");
		    break;
		case 4:
		    system("clear && apt install swift -y && python3 /data/data/com.termux/files/chroot/compilers.py");
		    break;
		case 5:
		    system("clear && apt install llvm libllvm -y && python3 /data/data/com.termux/files/chroot/compilers.py");
		    break;
		case 6:
		    system("clear && apt install golang -y && python3 /data/data/com.termux/files/chroot/compilers.py");
		    break;
		case 7:
		    system("clear && apt install php php-apache -y && python3 /data/data/com.termux/files/chroot/compilers.py");
		    break;
		case 8:
		    system("clear && apt install openjdk-17 -y && python3 /data/data/com.termux/files/chroot/compilers.py");
		    break;
		case 9:
		    system("clear && apt install nodejs -y && python3 /data/data/com.termux/files/chroot/compilers.py");
		    break;
		case 10:
		    system("clear && apt install nodejs-lts -y && python3 /data/data/com.termux/files/chroot/compilers.py");
		    break;
		case 11:
		    system("clear && apt install kotlin -y && python3 /data/data/com.termux/files/chroot/compilers.py");
		    break;
		case 12:
		    system("clear && apt install julia -y && python3 /data/data/com.termux/files/chroot/compilers.py");
	        break;
		case 13:
		    system("clear && python3 /data/data/com.termux/files/chroot/pacman.py");
		    break;
	}
}
