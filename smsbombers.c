#include <stdio.h>
#include "color.h"

int main() {
	int a;

	printf(ANSI_COLOR_CYAN    "STALIN-OS cpt edition Package Manager v4.3 by Dima-diep" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_CYAN    "=====================================" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 1.T-Bomb               |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 2.SMSBomber300         |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 3.Egyptian-SMS-Spammer |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 4.spymer               |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_GREEN   "| 5.exit                 |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_CYAN    "=====================================" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "Select your bomber: ");
	scanf("%d", &a);

	switch(a) {
		case 1:
		    system("clear && cd ~ && git clone https://github.com/TheSpeedX/TBomb && python3 /data/data/com.termux/files/chroot/smsbombers.py");
		    break;
		case 2:
		    system("clear && cd ~ && git clone https://github.com/Ivan-Hacker-700/SMSBomber300 && python3 /data/data/com.termux/files/chroot/smsbombers.py");
		    break;
		case 3:
		    system("clear && cd ~ && git clone https://github.com/KendoClaw1/Egyptian-SMS-Spammer && python3 /data/data/com.termux/files/chroot/smsbombers.py");
		    break;
		case 4:
		    system("clear && cd ~ && git clone https://github.com/FSystem88/spymer && python3 /data/data/com.termux/files/chroot/smsbombers.py");
		    break;
		case 5:
		    system("clear && python3 /data/data/com.termux/files/chroot/pacman.py");
		    break;
	}
}
