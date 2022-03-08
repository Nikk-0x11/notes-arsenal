```
❯ nc saturn.picoctf.net 55824
'picoCTF{gl17ch_m3_n07_' + chr(0x39) + chr(0x63) + chr(0x34) + chr(0x32) + chr(0x61) + chr(0x34) + chr(0x35) + chr(0x64) + '}'

❯ python3
Python 3.10.2 (main, Jan 15 2022, 19:56:27) [GCC 11.1.0] on linux
Type "help", "copyright", "credits" or "license" for more information.

>>> print(chr(0x39) + chr(0x63) + chr(0x34) + chr(0x32) + chr(0x61) + chr(0x34) + chr(0x35) + chr(0x64))
9c42a45d

>>> print(chr(0x39),chr(0x63),chr(0x34),chr(0x32),chr(0x61),chr(0x34),chr(0x35), chr(0x64))
9 c 4 2 a 4 5 d
>>> exit()

╭─    ~/CTFs/pico_ctf/pico_gym/general_skills/glitch_cat                                                                                                                                                              ✔  took 56s  ─╮
╰─ **picoCTF{gl17ch_m3_n07_9c42a45d}**
```