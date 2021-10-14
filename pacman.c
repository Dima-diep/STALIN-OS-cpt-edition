#include <stdio.h>
#include "color.h"

int main() {
  int a;

  puts(ANSI_COLOR_CYAN   "STALIN-OS cpt-edition Package Manager v4.3 by Dima-diep");
  puts(ANSI_COLOR_CYAN   "===================================");
  puts(ANSI_COLOR_WHITE  "| 1.Games                         |");
  puts(ANSI_COLOR_RED    "| 2.Network Tools                 |");
  puts(ANSI_COLOR_BLUE   "| 3.Compilers                     |");
  puts(ANSI_COLOR_BLUE   "| 4.Text editors                  |");
  puts(ANSI_COLOR_WHITE  "| 5.SMS-Bombers                   |");
  puts(ANSI_COLOR_BLUE   "| 6.Other tools                   |");
  puts(ANSI_COLOR_GREEN  "| 7.Install python2 library       |");
  puts(ANSI_COLOR_GREEN  "| 8.Install python3 library       |");
  puts(ANSI_COLOR_GREEN  "| 9.Install ruby library          |");
  puts(ANSI_COLOR_GREEN  "| 10.Install nodejs (npm) library |");
  puts(ANSI_COLOR_BLUE   "| 11.Help with command            |");
  puts(ANSI_COLOR_WHITE  "| 12.Exit                         |");
  puts(ANSI_COLOR_CYAN   "|==================================");
  puts(ANSI_COLOR_YELLOW "Select your function:");
  scanf("%d", &a);
  switch (a) {
  	case 1:
  	    system("clear && python3 /data/data/com.termux/files/chroot/games.py");
  	    break;
  	case 2:
  	    system("clear && python3 /data/data/com.termux/files/chroot/nettools.py");
  	    break;
  	case 3:
  	    system("clear && python3 /data/data/com.termux/files/chroot/compilers.py");
  	    break;
  	case 4:
  	    system("clear && python3 /data/data/com.termux/files/chroot/texteditors.py");
  	    break;
  	case 5:
  	    system("clear && python3 /data/data/com.termux/files/chroot/smsbombers.py");
  	    break;
  	case 6:
  	    system("clear && python3 /data/data/com.termux/files/chroot/ottools.py");
  	    break;
  	case 7:
  	    system("clear && python3 /data/data/com.termux/files/chroot/pip2.py");
  	    break;
  	case 8:
  	    system("clear && python3 /data/data/com.termux/files/chroot/pip3.py");
  	    break;
  	case 9:
  	    system("clear && python3 /data/data/com.termux/files/chroot/ruby.py");
  	    break;
  	case 10:
  	    system("clear && python3 /data/data/com.termux/files/chroot/npm.py");
  	    break;
  	case 11:
  	    system("clear && python3 /data/data/com.termux/files/chroot/man.py");
  	    break;
  	case 12:
  	    system("clear && python3 /data/data/com.termux/files/chroot/chroot.py");
  	    break;
  }
}
