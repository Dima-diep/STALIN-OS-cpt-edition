#!/bin/bash
apt update
apt upgrade
apt install make cmake python e2fsprogs calc man busybox proot proot-distro termux-api htop-legacy -y
cmake CMakeLists.txt
make
python3 -m pip install --upgrade pip
python3 -m pip install termcolor colorama
cd ~/..
mkdir boot
mkdir chroot
mkdir system
cd -
rm -rf *.c *.o Makefile CMake* cmake*
chmod 777 *
mv chlogin.py ~/../chroot
mv chpass.py ~/../chroot
mv login* ~/../boot
mv pass.py ~/../boot
mv compilers ~/../chroot
mv contacts.py ~/../chroot
mv file* ~/../chroot
mv games* ~/../chroot
mv git.py ~/../chroot
mv grub* ~/../boot
mv *.html ~/../system
mv inspack.py ~/../chroot
mv man.py ~/../chroot
mv Manifest.json ~/../system
mv nettools* ~/../chroot
mv ottools* ~/../chroot
mv pac* ~/../chroot
mv pip* ~/../chroot
mv proot* ~/../chroot
mv select* ~/../boot
mv ruby.py ~/../chroot
mv smsbombers* ~/../chroot
mv telegram.py ~/../chroot
mv texteditors* ~/../chroot
mv lsattr.py ~/../chroot
mv grep.py ~/../chroot
mv mkfile.py ~/../chroot
mv mkdir.py ~/../chroot
mv remove.py ~/../chroot
mv shred.py ~/../chroot
mv mvfile.py ~/../chroot
mv cpfile.py ~/../chroot
mv cpdir.py ~/../chroot
mv chmodattr.py ~/../chroot
mv terminal* ~/../system
mv nmap.py ~/../chroot
mv netcat.py ~/../chroot
mv apache.py ~/../chroot
mv geomac.py ~/../chroot
mv mitmproxy.py ~/../chroot
mv uninstall.py ~/../system
mv reinstall.py ~/../system
mv recovery/* ~/../system
mv color.h ~/../system
mv chroot* ~/../chroot
mv ofaa.py ~/../chroot
mv ofte.py ~/../chroot
mv ssh.py ~/../chroot
mv atilo $PREFIX/bin
mv atilo* ~/../chroot
echo "#!/bin/bash" > ~/../usr/bin/login
echo "python3 /data/data/com.termux/files/boot/grub.py" >> ~/../usr/bin/login
cd ~
git clone https://github.com/Dima-diep/geomac
cd geomac
dpkg -i *.deb
cd ..
git clone https://github.com/Dima-diep/Music-Termux
git clone https://github.com/Dima-diep/Linux-Installer-Termux
chmod 777 Music-Termux/*
chmod 777 Linux-Installer-Termux/*
