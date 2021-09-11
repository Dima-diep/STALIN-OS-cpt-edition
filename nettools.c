#include <stdio.h>
#include "color.h"

int main() {
	int a;

	printf(ANSI_COLOR_CYAN    "STALIN-OS cpt edition Package Manager v4.3 by Dima-diep" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_CYAN    "=====================================" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_GREEN   "| 1.nmap+netcat                     |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 2.metasploit                      |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_BLUE    "| 3.apache                          |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_BLUE    "| 4.sqlite3 (for reading databases) |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 5.postgresql (for metasploit)     |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 6.bettercap                       |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 7.dirb                            |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 8.aircrack-ng                     |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 9.arp-scan                        |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 10.mitmproxy                      |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 11.evil-ssdp                      |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 12.WiFite                         |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_MAGENTA "| 13.Exit                           |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_CYAN    "=====================================" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "Select your package: ");
	scanf("%d", &a);

	switch(a) {
		case 1:
		    system("clear && apt install nmap nmap-ncat -y && python3 /data/data/com.termux/files/chroot/nettools.py");
		    break;
		case 2:
		    system("clear && git clone https://github.com/Dima-diep/Metasploit && cd Metasploit && chmod 777 * && bash metasploit.sh && python3 /data/data/com.termux/files/chroot/nettools.py");
		    break;
		case 3:
		    system("clear && apt install apache2 -y && python3 /data/data/com.termux/files/chroot/nettools.py");
		    break;
		case 4:
		    system("clear && apt install sqlite3 -y && python3 /data/data/com.termux/files/chroot/nettools.py");
		    break;
		case 5:
		    system("clear && apt install postgresql -y && python3 /data/data/com.termux/files/chroot/nettools.py");
		    break;
		case 6:
		    system("clear && apt install root-repo -y && apt install bettercap -y &&python3 /data/data/com.termux/files/chroot/nettools.py");
		    break;
		case 7:
		    system("clear && apt install dirb -y && python3 /data/data/com.termux/files/chroot/nettools.py");
		    break;
		case 8:
		    system("clear && apt install root-repo -y && apt install aircrack-ng -y && python3 /data/data/com.termux/files/chroot/nettools.py");
		    break;
		case 9:
		    system("clear && apt install root-repo -y && apt install arp-scan -y && python3 /data/data/com.termux/files/chroot/nettools.py");
		    break;
		case 10:
		    system("clear && python3 -m pip install --upgrade pip && python3 -m pip install mitmproxy && python3 /data/data/com.termux/files/chroot/nettools.py");
		    break;
		case 11:
		    system("clear && git clone https://github.com/initstring/evil-ssdp && python3 /data/data/com.termux/files/chroot/nettools.py");
		    break;
		case 12:
		    system("clear && git clone https://github.com/derv82/WiFite.git && python3 /data/data/com.termux/files/chroot/nettools.py");
		    break;
		case 13:
		    system("clear && python3 /data/data/com.termux/files/chroot/pacman.py");
		    break;
	}
}
