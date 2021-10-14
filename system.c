#include <stdio.h>
#include "color.h"

int main() {
	int a;
	puts(ANSI_COLOR_CYAN "=====================================");
	puts(ANSI_COLOR_CYAN "|          SYSTEM   MENU            |");
	puts(ANSI_COLOR_CYAN "=====================================");
	puts(ANSI_COLOR_RED  "| 1.Uninstall OS                    |");
	puts(ANSI_COLOR_RED  "| 2.Reinstall OS                    |");
	puts(ANSI_COLOR_RED  "| 3.Initialize recovery             |");
	puts(ANSI_COLOR_RED  "| 4.Uninstall recovery              |");
	puts(ANSI_COLOR_RED  "| 5.Reinstall recovery              |");
	puts(ANSI_COLOR_RED  "| 6.Restart with root               |");
	puts(ANSI_COLOR_RED  "| 7.Change login                    |");
	puts(ANSI_COLOR_RED  "| 8.Change password                 |");
	puts(ANSI_COLOR_RED  "| 9.Add your script into recovery   |");
	puts(ANSI_COLOR_RED  "| 10.Uninstall proot-distro system  |");
	puts(ANSI_COLOR_RED  "| 11.Uninstall atilo system         |");
	puts(ANSI_COLOR_RED  "| 12.Exit to chroot                 |");
	puts(ANSI_COLOR_RED  "=====================================");
	puts(ANSI_COLOR_BLUE "Select: ");
	scanf("%d", &a);

	switch(a) {
		case 1:
		    system("clear && python3 /data/data/com.termux/files/system/uninstall.py");
		    break;
		case 2:
		    system("clear && python3 /data/data/com.termux/files/system/reinstall.py");
		    break;
		case 3:
		    system("clear && bash /data/data/com.termux/files/system/initialize.sh");
		    break;
		case 4:
		    system("clear && rm -rf ~/../recovery && echo \"Recovery has been uninstalled\" && sleep 10 && python3 /data/data/com.termux/files/system/system.py");
		    break;
		case 5:
		    system("clear && rm -rf ~/../recovery && bash /data/data/com.termux/files/system/initialize.sh && python3 /data/data/com.termux/files/system/system.py");
		    break;
		case 6:
		    system("clear && sudo python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
		case 7:
		    system("clear && python3 /data/data/com.termux/files/chroot/chlogin.py && python3 /data/data/com.termux/files/system/system.py");
		    break;
		case 8:
		    system("clear && python3 /data/data/com.termux/files/chroot/chpass.py");
		    break;
		case 9:
		    system("clear && python3 /data/data/com.termux/files/system/add.py");
		    break;
		case 10:
		    system("clear && python3 /data/data/com.termux/files/chroot/proot-un.py");
		    break;
		case 11:
		    system("clear && python3 /data/data/com.termux/files/chroot/atilo-un.py");
		    break;
		case 12:
		    system("clear && python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
	}
}
