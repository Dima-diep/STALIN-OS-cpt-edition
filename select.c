#include <stdio.h>

int main() {
	int a;
	printf("Select your system: ");
	scanf("%d", &a);

	switch(a) {
	    case 1:
	    	system("clear && python3 /data/data/com.termux/files/chroot/chroot.py", 0);
	    	break;
	    case 2:
	        system("clear && python3 /data/data/com.termux/files/boot/proot-sel1.py", 0);
	        break;
	    case 3:
	        system("clear && python3 /data/data/com.termux/files/boot/proot-sel2.py", 0);
	        break;
	    default:
	        system("clear && python3 /data/data/com.termux/files/boot/select.py", 0);
	        break;
	return 0;
	}
}
