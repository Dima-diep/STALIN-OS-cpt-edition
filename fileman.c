#include <stdio.h>
#include "color.h"

int main() {
	int a;

	printf(ANSI_COLOR_CYAN    "STALIN-OS cpt edition Package Manager v4.3 by Dima-diep" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_CYAN    "===================================" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 1.Check all files               |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 2.Check all info for files      |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 3.Check attributes of files     |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 4.Find file in directory        |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 5.Execute file                  |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 6.Make directory                |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 7.Make file                     |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 8.Remove file/directory         |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 9.Totally remove file/directory |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 10.Move/rename file/directory   |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 11.Copy file                    |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 12.Copy directory               |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 13.chmod/chattr                 |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "| 14.Exit to chroot               |" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_CYAN    "===================================" ANSI_COLOR_RESET "\n");
	printf(ANSI_COLOR_RED     "Select your option: ");
	scanf("%d", &a);

	switch(a) {
		case 1:
		    system("clear && python3 /data/data/com.termux/files/chroot/filecheck.py");
		    break;
		case 2:
		    system("clear && python3 /data/data/com.termux/files/chroot/fileinfo.py");
		    break;
		case 3:
		    system("clear && python3 /data/data/com.termux/files/chroot/lsattr.py");
		    break;
		case 4:
		    system("clear && python3 /data/data/com.termux/files/chroot/grep.py");
		    break;
		case 5:
		    system("clear && python3 /data/data/com.termux/files/chroot/exec.py");
		    break;
		case 6:
		    system("clear && python3 /data/data/com.termux/files/chroot/mkdir.py");
		    break;
		case 7:
		    system("clear && python3 /data/data/com.termux/files/chroot/mkfile.py");
		    break;
		case 8:
		    system("clear && python3 /data/data/com.termux/files/chroot/remove.py");
		    break;
		case 9:
		    system("clear && python3 /data/data/com.termux/files/chroot/shred.py");
		    break;
		case 10:
		    system("clear && python3 /data/data/com.termux/files/chroot/mvfile.py");
		    break;
		case 11:
		    system("clear && python3 /data/data/com.termux/files/chroot/cpfile.py");
		    break;
		case 12:
		    system("clear && python3 /data/data/com.termux/files/chroot/cpdir.py");
		    break;
		case 13:
		    system("clear && python3 /data/data/com.termux/files/chroot/chmodattr.py");
		    break;
		case 14:
		    system("clear && python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
	}
}
