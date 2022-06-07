# keygenme-py

got a python source code file `keygenme-trial.py`

**key parts**

```py
key_part_static1_trial = "picoCTF{1n_7h3_|<3y_of_"
key_part_dynamic1_trial = "xxxxxxxx"
key_part_static2_trial = "}"
key_full_template_trial = key_part_static1_trial + \
    key_part_dynamic1_trial + key_part_static2_trial
```

**enter license function**

```py
def enter_license():
    user_key = input("\nEnter your license key: ")
    user_key = user_key.strip()

    global bUsername_trial

    if check_key(user_key, bUsername_trial):
        decrypt_full_version(user_key)
    else:
        print("\nKey is NOT VALID. Check your data entry.\n\n")
```

if `check_key(user_key, bUsername_trial)` is true then it'll output the flag.

```py
if len(key) != len(key_full_template_trial):
        return False
```

according to this code key is the same as `picoCTF{1n_7h3_|<3y_of_xxxxxxxx}`

```py
i = 0
        for c in key_part_static1_trial:
            if key[i] != c:
                return False
            i += 1
```

according to this code first part of flag is `picoCTF{1n_7h3_|<3y_of_`

```py
if key[i] != hashlib.sha256(username_trial).hexdigest()[n]:
            return False
        else:
            i += 1
```

rest is 8 if statements in the function and n is in the order 4 5 3 6 2 7 1 8. amount of if statements is equal to the remaining characters needed to find

```py
import hashlib
username_trial = "GOUGH"
bUsername_trial = b"GOUGH"

key_part_static1_trial = "picoCTF{1n_7h3_|<3y_of_"
key_part_dynamic1_trial = "xxxxxxxx"
key_part_static2_trial = "}"
key_full_template_trial = key_part_static1_trial + \
    key_part_dynamic1_trial + key_part_static2_trial

print(hashlib.sha256(bUsername_trial).hexdigest()[4])
print(hashlib.sha256(bUsername_trial).hexdigest()[5])
print(hashlib.sha256(bUsername_trial).hexdigest()[3])
print(hashlib.sha256(bUsername_trial).hexdigest()[6])
print(hashlib.sha256(bUsername_trial).hexdigest()[2])
print(hashlib.sha256(bUsername_trial).hexdigest()[7])
print(hashlib.sha256(bUsername_trial).hexdigest()[1])
print(hashlib.sha256(bUsername_trial).hexdigest()[8])

# f911a486
```
