#include <stdio.h>
#include "color.h"

int main() {
	int a;
	printf(ANSI_COLOR_CYAN "=====================================" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_CYAN "|          SYSTEM   MENU            |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_CYAN "=====================================" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED  "| 1.Uninstall OS                    |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED  "| 2.Reinstall OS                    |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED  "| 3.Initialize recovery             |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED  "| 4.Uninstall recovery              |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED  "| 5.Reinstall recovery              |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED  "| 6.Restart with root               |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED  "| 7.Change login                    |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED  "| 8.Change password                 |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED  "| 9.Add your script into recovery   |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED  "| 10.Uninstall proot-distro system  |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED  "| 11.Uninstall atilo system         |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED  "| 12.Exit to chroot                 |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED  "=====================================" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_BLUE "Select: ");
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
