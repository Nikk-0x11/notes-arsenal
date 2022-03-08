```
❯ ls
      level4.flag.txt.enc       level4.hash.bin       level4.py

❯ nvim level4.py

❯ python3 level4.py

Welcome back... your flag, user:
**picoCTF{fl45h_5pr1ng1ng_c8005223}**
```

```python
import hashlib

### THIS FUNCTION WILL NOT HELP YOU FIND THE FLAG --LT ########################
def str_xor(secret, key):
    #extend key to secret length
    new_key = key
    i = 0
    while len(new_key) < len(secret):
        new_key = new_key + key[i]
        i = (i + 1) % len(key)
    return "".join([chr(ord(secret_c) ^ ord(new_key_c)) for (secret_c,new_key_c) in zip(secret,new_key)])
###############################################################################

flag_enc = open('level4.flag.txt.enc', 'rb').read()
correct_pw_hash = open('level4.hash.bin', 'rb').read()

def hash_pw(pw_str):
    pw_bytes = bytearray()
    pw_bytes.extend(pw_str.encode())
    m = hashlib.md5()
    m.update(pw_bytes)
    return m.digest()

def level_4_pw_check(user_pw):
    # user_pw = input("Please enter correct password for flag: ")

    user_pw_hash = hash_pw(user_pw)

    if( user_pw_hash == correct_pw_hash ):
        print("Welcome back... your flag, user:")
        decryption = str_xor(flag_enc.decode(), user_pw)
        print(decryption)
        return
    print("That password is incorrect")

# level_4_pw_check()

# def analyze_all():
#    for i in pos_pw_list:
#        level_4_pw_check(i)

# The strings below are 100 possibilities for the correct password.
#   (Only 1 is correct)
pos_pw_list = ["fb81", "195e", "3c10", "a768", "ad1b", "fe1e", "33e3", "6a42", "aea5", "4ef0", "fb62", "4571", "5d9f", "d821", "5371", "19f3", "f276", "588d", "b5af", "e00f", "eb55", "324f", "3d25", "e4a9", "e2ac", "aef6", "fc3e", "2317", "38d3", "57a7", "1321", "9b89", "5b9d", "39b6", "bcc1", "5972", "683e", "5ba1", "ee01", "3198", "3946", "a73e", "c439", "4836", "b563", "bfb9", "bb28", "aee3", "bd58", "8d6c", "c3d3", "f973", "936e", "2186", "7ec0", "f9a3", "afff", "f832", "d7d4", "2017", "9887", "9d44", "6974", "eede", "a061", "22a7", "4524", "3079", "a85a", "7973", "4560", "5580", "929d", "386f", "8a9b", "9e9b", "41be", "9dc1", "c58e", "442c", "2b1a", "e864", "1239", "9c5a", "5333", "3d85", "4e25", "2624", "4c2f", "6cc8", "5e30", "f538", "963f", "e970", "3285", "b7d7", "7429", "4193", "659b", "3986"]

def analyze_all():
    for i in pos_pw_list:
        level_4_pw_check(i)

analyze_all()
```