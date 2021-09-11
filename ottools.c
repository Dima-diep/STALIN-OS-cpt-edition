#include <stdio.h>
#include "color.h"

int main() {
	int a;

	printf(ANSI_COLOR_CYAN    "STALIN-OS cpt edition Package Manager v4.3 by Dima-diep" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_CYAN    "===========================" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 1.Telegram Number Check |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_BLUE    "| 2.system upgrade        |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_BLUE    "| 3.Install your package  |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_BLUE    "| 4.Clone your repository |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_BLUE    "| 5.Create your package   |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_BLUE    "| 6.Remove your packages  |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_BLUE    "| 7.List packages         |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_GREEN   "| 8.exit                  |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_CYAN    "===========================" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "Select: ");
	scanf("%d", &a);

	switch(a) {
		case 1:
		    system("clear && cd ~ && git clone https://github.com/Dima-diep/Telegram-numcheck && python3 /data/data/com.termux/files/chroot/ottools.py");
		    break;
		case 2:
		    system("clear && apt update && apt upgrade -y && python3 -m pip install --upgrade pip && python3 /data/data/com.termux/files/chroot/ottools.py");
		    break;
		case 3:
		    system("clear && python3 /data/data/com.termux/files/chroot/inspack.py && python3 /data/data/com.termux/files/chroot/ottools.py");
		    break;
		case 4:
		    system("clear && python3 /data/data/com.termux/files/chroot/git.py && python3 /data/data/com.termux/files/chroot/ottools.py");
		    break;
		case 5:
		    system("clear && python3 /data/data/com.termux/files/chroot/paccreate.py && python3 /data/data/com.termux/files/chroot/ottools.py");
		    break;
		case 6:
		    system("clear && python3 /data/data/com.termux/files/chroot/pacrem.py && python3 /data/data/com.termux/files/chroot/ottools.py");
		    break;
		case 7:
		    system("clear && apt list > ~/apt.list && echo \"Check ~/apt.list\" && sleep 10 && python3 /data/data/com.termux/files/chroot/ottools.py");
		    break;
		case 8:
		    system("clear && python3 /data/data/com.termux/files/chroot/pacman.py");
		    break;
    }
}
