```
❯ ssh ctf-player@venus.picoctf.net -p 52483
ctf-player@venus.picoctf.net's password:
Welcome to Ubuntu 18.04.5 LTS (GNU/Linux 5.4.0-1041-aws x86_64)

 * Documentation:  <https://help.ubuntu.com>
 * Management:     <https://landscape.canonical.com>
 * Support:        <https://ubuntu.com/advantage>
This system has been minimized by removing packages and content that are
not required on a system that users do not log into.

To restore this content, you can run the 'unminimize' command.
Last login: Wed Mar  2 21:49:17 2022 from 127.0.0.1

ctf-player@pico-chall$ ls
1of3.flag.txt  instructions-to-2of3.txt

ctf-player@pico-chall$ cat 1of3.flag.txt
picoCTF{xxsh_

ctf-player@pico-chall$ cd /

ctf-player@pico-chall$ cat 2of3.flag.txt
0ut_0f_\\/\\/4t3r_

ctf-player@pico-chall$ cd

ctf-player@pico-chall$ cat 3of3.flag.txt
21cac893}

ctf-player@pico-chall$

**picoCTF{xxsh_0ut_0f_\\/\\/4t3r_21cac893}**
```