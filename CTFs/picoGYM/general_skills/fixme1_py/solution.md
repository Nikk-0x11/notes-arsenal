```
❯ ls
      fixme1.py

❯ python3 fixme1.py
  File "/home/nikk/CTFs/pico_ctf/pico_gym/general_skills/fixme1_py/fixme1.py", line 20
    print('That is correct! Here\\'s your flag: ' + flag)
IndentationError: unexpected indent

❯ nvim fixme1.py

❯ python3 fixme1.py
That is correct! Here's your flag: **picoCTF{1nd3nt1ty_cr1515_e3881c95}**
```

```python
import random

def str_xor(secret, key):
    #extend key to secret length
    new_key = key
    i = 0
    while len(new_key) < len(secret):
        new_key = new_key + key[i]
        i = (i + 1) % len(key)
    return "".join([chr(ord(secret_c) ^ ord(new_key_c)) for (secret_c,new_key_c) in zip(secret,new_key)])

flag_enc = chr(0x15) + chr(0x07) + chr(0x08) + chr(0x06) + chr(0x27) + chr(0x21) + chr(0x23) + chr(0x15) + chr(0x5a) + chr(0x07) + chr(0x00) + chr(0x46) + chr(0x0b) + chr(0x1a) + chr(0x5a) + chr(0x1d) + chr(0x1d) + chr(0x2a) + chr(0x06) + chr(0x1c) + chr(0x5a) + chr(0x5c) + chr(0x55) + chr(0x40) + chr(0x3a) + chr(0x0b) + chr(0x58) + chr(0x51) + chr(0x5c) + chr(0x44) + chr(0x06) + chr(0x57) + chr(0x5e) + chr(0x14)

flag = str_xor(flag_enc, 'enkidu')
	print('That is correct! Here\\'s your flag: ' + flag)
```

```python
import random

def str_xor(secret, key):
    #extend key to secret length
    new_key = key
    i = 0
    while len(new_key) < len(secret):
        new_key = new_key + key[i]
        i = (i + 1) % len(key)
    return "".join([chr(ord(secret_c) ^ ord(new_key_c)) for (secret_c,new_key_c) in zip(secret,new_key)])

flag_enc = chr(0x15) + chr(0x07) + chr(0x08) + chr(0x06) + chr(0x27) + chr(0x21) + chr(0x23) + chr(0x15) + chr(0x5a) + chr(0x07) + chr(0x00) + chr(0x46) + chr(0x0b) + chr(0x1a) + chr(0x5a) + chr(0x1d) + chr(0x1d) + chr(0x2a) + chr(0x06) + chr(0x1c) + chr(0x5a) + chr(0x5c) + chr(0x55) + chr(0x40) + chr(0x3a) + chr(0x0b) + chr(0x58) + chr(0x51) + chr(0x5c) + chr(0x44) + chr(0x06) + chr(0x57) + chr(0x5e) + chr(0x14)

flag = str_xor(flag_enc, 'enkidu')
print('That is correct! Here\\'s your flag: ' + flag)
```