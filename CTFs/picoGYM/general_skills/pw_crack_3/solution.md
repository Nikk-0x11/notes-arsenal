```
❯ ls
      level3.flag.txt.enc       level3.hash.bin       level3.py

❯ nvim level3.py

❯ cat level3.py | grep  8133
pos_pw_list = ["6efa", "3da5", "f91a", "bb6f", "eb4a", "e844", "8133"]

❯ python3 level3.py
Please enter correct password for flag: 6efa
That password is incorrect

❯ python3 level3.py
Please enter correct password for flag: f91a
That password is incorrect

❯ python3 level3.py
Please enter correct password for flag: eb4a
That password is incorrect

❯ python3 level3.py
Please enter correct password for flag: e844
That password is incorrect

❯ python3 level3.py
Please enter correct password for flag: 3da5
Welcome back... your flag, user:
**picoCTF{m45h_fl1ng1ng_5a6e8955}**
```