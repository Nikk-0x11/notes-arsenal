### Installation
```
$ iwctl

# device list

# station wlan0 get-networks

# station wlan0 connect "network name"

$ ping -c2 google.com

$ lsblk

$ cfdisk /dev/sda
-- 512M / Rest space --

$ mkfs.fat -F32 /dev/sda1 (512M partition)

$ mkfs.ext4 /dev/sda2

$ mount /dev/sda2 /mnt

$ mkdir /mnt/home

$ mount /dev/sda2 /mnt/home

$ lsblk

$ pacstrap -i /mnt base base-devel linux linux-firmware sudo nano

$ genfstab -U -p /mnt >> /mnt/etc/fstab

$ arch-chroot /mnt /bin/bash

$ nano /etc/locale.gen 
# #en_US.UTF-8 UTF-8

$ locale-gen

$ echo "LANG=en_US.UTF-8" > /etc/locale.conf

$ ln -sf /usr/share/zoneinfo/Asia/Calcutta/ /etc/localtime

$ hwclock --systohc --utc

$ date

$ echo archPC > /etc/hostname

$ nano /etc/hosts
# 127.0.1.1 localhost.localdomain archPC

$ pacman -S networkmanager

$ systemctl enable NetworkManager

$ passwd

$ pacman -S grub efibootmgr

$ mkdir /boot/efi

$ mount /dev/sda1 /boot/efi

$ lsblk # to check if everything is mounted correctly

$ grub-install --target=x86_64-efi --bootloader-id=GRUB --efi-directory=/boot/efi --removable

$ grub-mkconfig -o /boot/grub/grub.cfg

$ exit

$ umount -R /mnt

$ reboot

$ fallocate -l 16G /swapfile

$ chmod 600 /swapfile

$ mkswap /swapfile

$ swapon /swapfile

$ echo '/swapfile none swap sw 0 0' >> /etc/fstab

$ free -m

$ useradd -m -g users -G wheel -s /bin/bash <username>

$ passwd username

$ EDITOR=nano visudo
# %wheel ALL=(ALL) ALL

$ exit
```

### Base Setup
```
$ sudo pacman -Syyu

$ sudo pacman -S xorg xorg-xinit xorg-server pulseaudio pulseaudio-alsa git wget curl zip unzip gzip p7zip tar make cmake gcc python-pip node npm go neovim tree man-pages man-db

# installing paru
$ git clone https://aur.archlinux.org/paru.git

$ cd paru

$ makepkg -sic
```