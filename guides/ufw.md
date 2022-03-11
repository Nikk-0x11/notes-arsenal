https://wiki.archlinux.org/title/Uncomplicated_Firewall

Basic UFW setup ?

```zsh
$ sudo pacman -Syu

$ sudo pacman -S iptables nftables ufw

$ sudo systemctl start ufw

$ sudo systemctl enable ufw

$ sudo ufw default allow outgoing

$ sudo ufw default deny incoming

$ sudo ufw allow ssh

$ sudo ufw status

$ sudo ufw enable
```