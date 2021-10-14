#include <stdio.h>
#include "color.h"

int main() {
	int a;

	puts(ANSI_COLOR_RED    "WARNING! YOU STARTED RECOVERY MODE!");
	puts(ANSI_COLOR_RED    "BE CAREFUL BECAUSE YOU CAN DESTROY YOUR SYSTEM!");
	puts(ANSI_COLOR_CYAN   "==================================================");
	puts(ANSI_COLOR_CYAN   "| N | Option                               | Root |");
	puts(ANSI_COLOR_RED    "| 1 | Shutdown Mobile                      | Y    |");
	puts(ANSI_COLOR_RED    "| 2 | Bootloop Mobile (dont destroy mobile | Y    |");
	puts(ANSI_COLOR_RED    "|   | bootfs, just calling bootloop)       |      |");
	puts(ANSI_COLOR_GREEN  "| 3 | Run my script                        | N    |");
	puts(ANSI_COLOR_GREEN  "| 4 | Exit to GRUB                         | N    |");
	puts(ANSI_COLOR_CYAN   "===================================================");
	puts(ANSI_COLOR_RED    "Select your compiler: ");
	scanf("%d", &a);

	switch(a) {
		case 1:
		    system("sudo reboot");
		    break;
		case 2:
		    system("sudo stop");
		    break;
		case 3:
		    system("python3 /data/data/com.termux/files/system/scripts.py");
		    break;
		case 4:
		    system("clear && python3 /data/data/com.termux/files/boot/grub.py");
		    break;
	}
}
