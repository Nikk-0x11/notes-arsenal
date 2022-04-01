```sh
sudo apt update && sudo apt upgrade

sudo apt install git wget curl zip unzip gzip p7zip apt-transport-https john binwalk nmap gobuster gdb hashcat python3 python3-pip nodejs golang ruby-full build-essential zsh neovim nmap feh htop binutils wireshark-qt net-tools default-jre openjdk-11-jdk openjdk-11-jre

Setup Radare:
git clone https://github.com/radareorg/radare2
cd radare2 ; sys/install.sh


Download Ghidra Zip:
https://github.com/NationalSecurityAgency/ghidra/releases

wget https://github.com/NationalSecurityAgency/ghidra/releases/download/Ghidra_10.1.2_build/ghidra_10.1.2_PUBLIC_20220125.zip

sudo unzip ghidra_10.1.2_PUBLIC_20220125.zip


Setup Sublime text:
wget -qO - https://download.sublimetext.com/sublimehq-pub.gpg | sudo apt-key add -

echo "deb https://download.sublimetext.com/ apt/stable/" | sudo tee /etc/apt/sources.list.d/sublime-text.list

sudo apt update && sudo apt install sublime-text


ZSH and Prompt setup:
sh -c "$(curl -fsSL https://raw.github.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"

git clone --depth=1 https://github.com/romkatv/powerlevel10k.git ${ZSH_CUSTOM:-$HOME/.oh-my-zsh/custom}/themes/powerlevel10k

ZSH_THEME = "powerlevel10k/powerlevel10k"

# clone arch-dots repo setup vimplug and copy paste nvim folder in ur .config folder then open nvim and :PlugInstall
```
