#include <stdio.h>
#include "color.h"

int main() {
  int a;

  printf(ANSI_COLOR_CYAN   "STALIN-OS cpt-edition Package Manager v4.3 by Dima-diep" ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_CYAN   "===================================" ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_WHITE  "| 1.Games                         |" ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_RED    "| 2.Network Tools                 |" ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_BLUE   "| 3.Compilers                     |" ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_BLUE   "| 4.Text editors                  |" ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_WHITE  "| 5.SMS-Bombers                   |" ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_BLUE   "| 6.Other tools                   |" ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_GREEN  "| 7.Install python2 library       |" ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_GREEN  "| 8.Install python3 library       |" ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_GREEN  "| 9.Install ruby library          |" ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_GREEN  "| 10.Install nodejs (npm) library |" ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_BLUE   "| 11.Help with command            |" ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_WHITE  "| 12.Exit                         |" ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_CYAN   "|==================================" ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_YELLOW "Select your function:" ANSI_COLOR_RESET "\n");
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

  return 0;
}
