#include <stdio.h>
#include "color.h"

int main () {
    int a;

	puts(ANSI_COLOR_CYAN    "=========================================");
	puts(ANSI_COLOR_WHITE   "|              Chroot menu              |");
	puts(ANSI_COLOR_CYAN    "=========================================");
	puts(ANSI_COLOR_GREEN   "| 1.Contacts                            |");
	puts(ANSI_COLOR_GREEN   "| 2.Music                               |");
	puts(ANSI_COLOR_RED     "| 3.Package Manager                     |");
	puts(ANSI_COLOR_YELLOW  "| 4.Telegram (supported only for arm64) |");
	puts(ANSI_COLOR_RED     "| 5.File Manager                        |");
	puts(ANSI_COLOR_RED     "| 6.Terminal tools                      |");
	puts(ANSI_COLOR_RED     "| 7.System menu                         |");
	puts(ANSI_COLOR_MAGENTA "| 8.Help for STALIN-OS                  |");
	puts(ANSI_COLOR_RED     "| 9.Plugin Vim Install                  |");
	puts(ANSI_COLOR_YELLOW  "| 10.Tor                                |");
	puts(ANSI_COLOR_MAGENTA "| 11.For developers                     |");
	puts(ANSI_COLOR_GREEN   "| 12.Open file in Android app           |");
	puts(ANSI_COLOR_GREEN   "| 13.Calculator                         |");
	puts(ANSI_COLOR_YELLOW  "| 14.Test Network Speed                 |");
	puts(ANSI_COLOR_GREEN   "| 15.Open file into text editor         |");
	puts(ANSI_COLOR_YELLOW  "| 16.Run SSH                            |");
	puts(ANSI_COLOR_RED     "| 17.Task Manager                       |");
	puts(ANSI_COLOR_RED     "| 18.Exit to GRUB                       |");
	puts(ANSI_COLOR_CYAN    "=========================================");
	puts(ANSI_COLOR_WHITE   "Select your program: ");
	scanf("%d", &a);

	switch (a) {
	    case 1:
		    system("python3 /data/data/com.termux/files/chroot/contacts.py");
		    system("python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
		case 2:
		    system("python3 /data/data/com.termux/files/chroot/player.py");
		    system("python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
		case 3:
		    system("python3 /data/data/com.termux/files/chroot/pacman.py");
		    system("python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
		case 4:
		    system("python3 /data/data/com.termux/files/chroot/telegram.py");
		    system("python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
		case 5:
		    system("python3 /data/data/com.termux/files/chroot/fileman.py");
		    system("python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
		case 6:
		    system("python3 /data/data/com.termux/files/system/terminal.py");
		    system("python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
		case 7:
		    system("python3 /data/data/com.termux/files/system/system.py");
		    break;
		case 8:
		    system("termux-open /data/data/com.termux/files/system/help.html && clear && python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
		case 9:
		    system("vim ~/.vimrc && clear && python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
		case 10:
		    system("tor");
		    system("python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
		case 11:
		    system("termux-open /data/data/com.termux/files/system/fordev.html && clear && python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
		case 12:
		    system("python3 /data/data/com.termux/files/chroot/ofaa.py");
		    break;
		case 13:
		    system("calc");
		    system("python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
		case 14:
		    system("ping 8.8.8.8");
		    system("sleep 10 && python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
		case 15:
		    system("python3 /data/data/com.termux/files/chroot/ofte.py");
		    break;
		case 16:
		    system("python3 /data/data/com.termux/files/chroot/ssh.py");
		    break;
		case 17:
		    system("htop");
		    system("python3 /data/data/com.termux/files/chroot/chroot.py");
		    break;
		case 18:
		    system("python3 /data/data/com.termux/files/boot/grub.py");
		    break;
    }		    
}
