#include <stdio.h>
#include "color.h"

int main() {
	int a;

	puts(ANSI_COLOR_CYAN  "STALIN-OS cpt edition Package Manager v4.3 by Dima-diep");
	puts(ANSI_COLOR_CYAN  "========================================");
	puts(ANSI_COLOR_GREEN "| 1.0verkill       | 21.nethack        |");
	puts(ANSI_COLOR_GREEN "| 2.angband        | 22.ninvaders      |");
	puts(ANSI_COLOR_GREEN "| 3.bastet         | 23.nsnake         |");
	puts(ANSI_COLOR_GREEN "| 4.brogue         | 24.nudoku         |");
	puts(ANSI_COLOR_GREEN "| 5.cavez-of-phear | 25.open-adventure |");
	puts(ANSI_COLOR_GREEN "| 6.cboard         | 26.pacman         |");
	puts(ANSI_COLOR_GREEN "| 7.curse-of-war   | 27.snake          |");
	puts(ANSI_COLOR_GREEN "| 8.dmagnetic      | 28.solitaire      |");
	puts(ANSI_COLOR_GREEN "| 9.dopewars       | 29.viletris       |");
	puts(ANSI_COLOR_GREEN "| 10.frotz         | 30.exit           |");
	puts(ANSI_COLOR_GREEN "| 11.glulxe        |+++++++++++++++++++|");
	puts(ANSI_COLOR_GREEN "| 12.gnuchess      |+++++++++++++++++++|");
	puts(ANSI_COLOR_GREEN "| 13.gnugo         |+++++++++++++++++++|");
	puts(ANSI_COLOR_GREEN "| 14.gnushogi      |+++++++++++++++++++|");
	puts(ANSI_COLOR_GREEN "| 15.gnuski        |+++++++++++++++++++|");
	puts(ANSI_COLOR_GREEN "| 16.greed         |+++++++++++++++++++|");
	puts(ANSI_COLOR_GREEN "| 17.lexter        |+++++++++++++++++++|");
	puts(ANSI_COLOR_GREEN "| 18.moon-buggy    |+++++++++++++++++++|");
	puts(ANSI_COLOR_GREEN "| 19.moria         |+++++++++++++++++++|");
	puts(ANSI_COLOR_GREEN "| 20.myman         |+++++++++++++++++++|");
	puts(ANSI_COLOR_CYAN  "========================================");
	puts(ANSI_COLOR_RED   "Select your game: ");
	scanf("%d", &a);

	switch(a) {
		case 1:
		    system("clear && apt install 0verkill -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 2:
		    system("clear && apt install angband -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 3:
		    system("clear && apt install bastet -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 4:
		    system("clear && apt install brogue -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 5:
		    system("clear && apt install cavez-of-phear -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 6:
		    system("clear && apt install cboard -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 7:
		    system("clear && apt install curse-of-war -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 8:
		    system("clear && apt install dmagnetic -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 9:
		    system("clear && apt install dopewars -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 10:
		    system("clear && apt install frotz -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 11:
		    system("clear && apt install glulxe -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 12:
		    system("clear && apt install gnugo -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 13:
		    system("clear && apt install gnushogi -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 14:
		    system("clear && apt install gnuski -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 15:
		    system("clear && apt install greed -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 16:
		    system("clear && apt install lexter -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 17:
		    system("clear && apt install moon-buggy -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 18:
		    system("clear && apt install moria -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 19:
		    system("clear && apt install myman -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 20:
		    system("clear && apt install nethack -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 21:
		    system("clear && apt install ninvaders -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 22:
		    system("clear && apt install nsnake -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 23:
		    system("clear && apt install nudoku -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 24:
		    system("clear && apt install open-adventure -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 25:
		    system("clear && apt install pacman4console -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 26:
		    system("clear && apt install snake -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 27:
		    system("clear && apt install tty-solitaire -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 28:
		    system("clear && apt install viletris -y && python3 /data/data/com.termux/files/chroot/games.py");
		    break;
		case 29:
		    system("clear && python3 /data/data/com.termux/files/chroot/pacman.py");
		    break;
	}
}
