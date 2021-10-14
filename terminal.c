#include <stdio.h>
#include "color.h"

int main() {
	int a;

	puts(ANSI_COLOR_CYAN    "STALIN-OS cpt edition Terminal menu");
	puts(ANSI_COLOR_CYAN    "==================================");
	puts(ANSI_COLOR_RED     "| N  | Tool       | Root (Y/N/S) |");
	puts(ANSI_COLOR_CYAN    "==================================");
	puts(ANSI_COLOR_GREEN   "| 1  | nmap       | S            |");
	puts(ANSI_COLOR_GREEN   "| 2  | netcat     | S            |");
	puts(ANSI_COLOR_MAGENTA "| 3  | metasploit | N            |");
	puts(ANSI_COLOR_MAGENTA "| 4  | apache     | N            |");
	puts(ANSI_COLOR_MAGENTA "| 5  | geomac     | N            |");
	puts(ANSI_COLOR_BLUE    "| 6  | bettercap  | Y            |");
	puts(ANSI_COLOR_MAGENTA "| 7  | mitmproxy  | N            |");
	puts(ANSI_COLOR_MAGENTA "| 8  | evil-ssdp  | N            |");
	puts(ANSI_COLOR_MAGENTA "| 9  | WiFite     | N            |");
	puts(ANSI_COLOR_YELLOW  "| 10 | exit       |              |");
	puts(ANSI_COLOR_CYAN    "==================================");
	puts(ANSI_COLOR_RED     "Select your compiler: ");
	scanf("%d", &a);

	switch(a) {
		case 1:
		    system("python3 /data/data/com.termux/files/chroot/nmap.py");
		    break;
		case 2:
		    system("python3 /data/data/com.termux/files/chroot/netcat.py");
		    break;
		case 3:
		    system("msfconsole");
		    system("python3 /data/data/com.termux/files/chroot/terminal.py");
		    break;
		case 4:
		    system("python3 /data/data/com.termux/files/chroot/apache.py");
		    break;
		case 5:
		    system("python3 /data/data/com.termux/files/chroot/geomac.py");
		    break;
		case 6:
		    system("sudo bettercap");
		    system("python3 /data/data/com.termux/files/chroot/terminal.py");
		    break;
		case 7:
		    system("python3 /data/data/com.termux/files/chroot/mitmproxy.py");
		    break;
		case 8:
		    system("python3 /data/data/com.termux/files/home/evil-ssdp/evil_ssdp.py");
		    system("python3 /data/data/com.termux/files/chroot/terminal.py");
		    break;
		case 9:
		    system("python3 /data/data/com.termux/files/home/wifite2/Wifite.py");
		    break;
		case 10:
		    system("python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
	}
}
