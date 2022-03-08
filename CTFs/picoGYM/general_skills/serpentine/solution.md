```
❯ wget <https://artifacts.picoctf.net/c/96/serpentine.py>
--2022-03-04 01:30:39--  <https://artifacts.picoctf.net/c/96/serpentine.py>
SSL_INIT
Loaded CA certificate '/etc/ssl/certs/ca-certificates.crt'
Resolving artifacts.picoctf.net (artifacts.picoctf.net)... 13.35.133.2, 13.35.133.114, 13.35.133.8, ...
Connecting to artifacts.picoctf.net (artifacts.picoctf.net)|13.35.133.2|:443... connected.
HTTP request sent, awaiting response... 200 OK
Length: 2550 (2.5K) [application/octet-stream]
Saving to: ‘serpentine.py’

serpentine.py                                               100%[========================================================================================================================================>]   2.49K  --.-KB/s    in 0s

2022-03-04 01:30:40 (6.50 MB/s) - ‘serpentine.py’ saved [2550/2550]

❯ ls
      serpentine.py

❯ nvim serpentine.py

❯ python3 serpentine.py

    Y
  .-^-.
 /     \\      .- ~ ~ -.
()     ()    /   _ _   `.                     _ _ _
 \\_   _/    /  /     \\   \\                . ~  _ _  ~ .
   | |     /  /       \\   \\             .' .~       ~-. `.
   | |    /  /         )   )           /  /             `.`.
   \\ \\_ _/  /         /   /           /  /                `'
    \\_ _ _.'         /   /           (  (
                    /   /             \\  \\
                   /   /               \\  \\
                  /   /                 )  )
                 (   (                 /  /
                  `.  `.             .'  /
                    `.   ~ - - - - ~   .'
                       ~ . _ _ _ _ . ~

Welcome to the serpentine encourager!

a) Print encouragement
b) Print flag
c) Quit

What would you like to do? (a/b/c) b

Oops! I must have misplaced the print_flag function! Check my source code!

a) Print encouragement
b) Print flag
c) Quit

What would you like to do? (a/b/c) a

-----------------------------------------------------
Keep it up!
-----------------------------------------------------

a) Print encouragement
b) Print flag
c) Quit

What would you like to do? (a/b/c) c

❯ nvim serpentine.py

❯ python3 serpentine.py

    Y
  .-^-.
 /     \\      .- ~ ~ -.
()     ()    /   _ _   `.                     _ _ _
 \\_   _/    /  /     \\   \\                . ~  _ _  ~ .
   | |     /  /       \\   \\             .' .~       ~-. `.
   | |    /  /         )   )           /  /             `.`.
   \\ \\_ _/  /         /   /           /  /                `'
    \\_ _ _.'         /   /           (  (
                    /   /             \\  \\
                   /   /               \\  \\
                  /   /                 )  )
                 (   (                 /  /
                  `.  `.             .'  /
                    `.   ~ - - - - ~   .'
                       ~ . _ _ _ _ . ~

Welcome to the serpentine encourager!

a) Print encouragement
b) Print flag
c) Quit

What would you like to do? (a/b/c) b
**picoCTF{7h3_r04d_l355_7r4v3l3d_b6567546}**
a) Print encouragement
b) Print flag
c) Quit

What would you like to do? (a/b/c) c
```

```python
import random
import sys

def str_xor(secret, key):
    #extend key to secret length
    new_key = key
    i = 0
    while len(new_key) < len(secret):
        new_key = new_key + key[i]
        i = (i + 1) % len(key)
    return "".join([chr(ord(secret_c) ^ ord(new_key_c)) for (secret_c,new_key_c) in zip(secret,new_key)])

flag_enc = chr(0x15) + chr(0x07) + chr(0x08) + chr(0x06) + chr(0x27) + chr(0x21) + chr(0x23) + chr(0x15) + chr(0x5c) + chr(0x01) + chr(0x57) + chr(0x2a) + chr(0x17) + chr(0x5e) + chr(0x5f) + chr(0x0d) + chr(0x3b) + chr(0x19) + chr(0x56) + chr(0x5b) + chr(0x5e) + chr(0x36) + chr(0x53) + chr(0x07) + chr(0x51) + chr(0x18) + chr(0x58) + chr(0x05) + chr(0x57) + chr(0x11) + chr(0x3a) + chr(0x0c) + chr(0x5d) + chr(0x5c) + chr(0x52) + chr(0x42) + chr(0x50) + chr(0x5a) + chr(0x5d) + chr(0x14)

def print_flag():
  flag = str_xor(flag_enc, 'enkidu')
  print(flag)

def print_encouragement():
  encouragements = ['You can do it!', 'Keep it up!',
                    'Look how far you\\'ve come!']
  choice = random.choice(range(0, len(encouragements)))
  print('\\n-----------------------------------------------------')
  print(encouragements[choice])
  print('-----------------------------------------------------\\n\\n')

def main():

  print(
'''
    Y
  .-^-.
 /     \\      .- ~ ~ -.
()     ()    /   _ _   `.                     _ _ _
 \\_   _/    /  /     \\   \\                . ~  _ _  ~ .
   | |     /  /       \\   \\             .' .~       ~-. `.
   | |    /  /         )   )           /  /             `.`.
   \\ \\_ _/  /         /   /           /  /                `'
    \\_ _ _.'         /   /           (  (
                    /   /             \\  \\\\
                   /   /               \\  \\\\
                  /   /                 )  )
                 (   (                 /  /
                  `.  `.             .'  /
                    `.   ~ - - - - ~   .'
                       ~ . _ _ _ _ . ~
'''
  )
  print('Welcome to the serpentine encourager!\\n\\n')

  while True:
    print('a) Print encouragement')
    print('b) Print flag')
    print('c) Quit\\n')
    choice = input('What would you like to do? (a/b/c) ')

    if choice == 'a':
      print_encouragement()

    elif choice == 'b':
	      print('\\nOops! I must have misplaced the print_flag function! Check my source code!\\n\\n')
        

    elif choice == 'c':
      sys.exit(0)

    else:
      print('\\nI did not understand "' + choice + '", input only "a", "b" or "c"\\n\\n')

if __name__ == "__main__":
  main()
```

```python
import random
import sys

def str_xor(secret, key):
    #extend key to secret length
    new_key = key
    i = 0
    while len(new_key) < len(secret):
        new_key = new_key + key[i]
        i = (i + 1) % len(key)
    return "".join([chr(ord(secret_c) ^ ord(new_key_c)) for (secret_c,new_key_c) in zip(secret,new_key)])

flag_enc = chr(0x15) + chr(0x07) + chr(0x08) + chr(0x06) + chr(0x27) + chr(0x21) + chr(0x23) + chr(0x15) + chr(0x5c) + chr(0x01) + chr(0x57) + chr(0x2a) + chr(0x17) + chr(0x5e) + chr(0x5f) + chr(0x0d) + chr(0x3b) + chr(0x19) + chr(0x56) + chr(0x5b) + chr(0x5e) + chr(0x36) + chr(0x53) + chr(0x07) + chr(0x51) + chr(0x18) + chr(0x58) + chr(0x05) + chr(0x57) + chr(0x11) + chr(0x3a) + chr(0x0c) + chr(0x5d) + chr(0x5c) + chr(0x52) + chr(0x42) + chr(0x50) + chr(0x5a) + chr(0x5d) + chr(0x14)

def print_flag():
  flag = str_xor(flag_enc, 'enkidu')
  print(flag)

def print_encouragement():
  encouragements = ['You can do it!', 'Keep it up!',
                    'Look how far you\\'ve come!']
  choice = random.choice(range(0, len(encouragements)))
  print('\\n-----------------------------------------------------')
  print(encouragements[choice])
  print('-----------------------------------------------------\\n\\n')

def main():

  print(
'''
    Y
  .-^-.
 /     \\      .- ~ ~ -.
()     ()    /   _ _   `.                     _ _ _
 \\_   _/    /  /     \\   \\                . ~  _ _  ~ .
   | |     /  /       \\   \\             .' .~       ~-. `.
   | |    /  /         )   )           /  /             `.`.
   \\ \\_ _/  /         /   /           /  /                `'
    \\_ _ _.'         /   /           (  (
                    /   /             \\  \\\\
                   /   /               \\  \\\\
                  /   /                 )  )
                 (   (                 /  /
                  `.  `.             .'  /
                    `.   ~ - - - - ~   .'
                       ~ . _ _ _ _ . ~
'''
  )
  print('Welcome to the serpentine encourager!\\n\\n')

  while True:
    print('a) Print encouragement')
    print('b) Print flag')
    print('c) Quit\\n')
    choice = input('What would you like to do? (a/b/c) ')

    if choice == 'a':
      print_encouragement()

    elif choice == 'b':
      # print('\\nOops! I must have misplaced the print_flag function! Check my source code!\\n\\n')
        print_flag()

    elif choice == 'c':
      sys.exit(0)

    else:
      print('\\nI did not understand "' + choice + '", input only "a", "b" or "c"\\n\\n')

if __name__ == "__main__":
  main()
```