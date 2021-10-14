#include <stdio.h>
#include "color.h"

int main() {
	int a;

	puts(ANSI_COLOR_CYAN    "STALIN-OS cpt edition Package Manager v4.3 by Dima-diep" ANSI_COLOR_RESET "\n");
	puts(ANSI_COLOR_CYAN    "============");
	puts(ANSI_COLOR_BLUE    "| 1.nano   |");
	puts(ANSI_COLOR_BLUE    "| 2.vim    |");
	puts(ANSI_COLOR_BLUE    "| 3.neovim |");
	puts(ANSI_COLOR_BLUE    "| 4.micro  |");
	puts(ANSI_COLOR_BLUE    "| 5.joe    |");
	puts(ANSI_COLOR_BLUE    "| 6.emacs  |");
	puts(ANSI_COLOR_BLUE    "| 7.mcedit |");
	puts(ANSI_COLOR_BLUE    "| 8.exit   |");
	puts(ANSI_COLOR_CYAN    "============");
	puts(ANSI_COLOR_RED     "Select your compiler: ");
	scanf("%d", &a);

	switch(a) {
		case 1:
		    system("apt install nano -y && python3 /data/data/com.termux/files/chroot/texteditors.py");
		    break;
		case 2:
		    system("apt install vim -y && python3 /data/data/com.termux/files/chroot/texteditors.py");
		    break;
		case 3:
		    system("apt install neovim -y && python3 /data/data/com.termux/files/chroot/texteditors.py");
		    break;
		case 4:
		    system("apt install micro -y && python3 /data/data/com.termux/files/chroot/texteditors.py");
		    break;
		case 5:
		    system("apt install joe -y && python3 /data/data/com.termux/files/chroot/texteditors.py");
		    break;
		case 6:
		    system("apt install emacs -y && python3 /data/data/com.termux/files/chroot/texteditors.py");
		    break;
		case 7:
		    system("apt install mcedit -y && python3 /data/data/com.termux/files/chroot/texteditors.py");
		    break;
		case 8:
		    system("python3 /data/data/com.termux/files/chroot/pacman.py");
		    break;
}
}
