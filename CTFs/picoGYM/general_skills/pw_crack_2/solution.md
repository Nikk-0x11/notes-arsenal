```
❯ ls
      level2.flag.txt.enc       level2.py

❯ nvim level2.py

❯ python3
Python 3.10.2 (main, Jan 15 2022, 19:56:27) [GCC 11.1.0] on linux
Type "help", "copyright", "credits" or "license" for more information.

>>> print(chr(0x64) + chr(0x65) + chr(0x37) + chr(0x36))
de76

>>> exit()

❯ python3 level2.py
Please enter correct password for flag: de76
Welcome back... your flag, user:
picoCTF{tr45h_51ng1ng_489dea9a}
```