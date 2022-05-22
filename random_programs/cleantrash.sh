#!/bin/bash

# Remove unused packages
sudo pacman -R $(pacman -Qtdq)
