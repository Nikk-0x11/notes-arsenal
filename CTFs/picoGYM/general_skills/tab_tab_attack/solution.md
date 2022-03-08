```
❯ ls
      Addadshashanammu.zip

❯ file Addadshashanammu.zip
Addadshashanammu.zip: Zip archive data, at least v1.0 to extract, compression method=store

❯ unzip Addadshashanammu.zip
Archive:  Addadshashanammu.zip
   creating: Addadshashanammu/
   creating: Addadshashanammu/Almurbalarammi/
   creating: Addadshashanammu/Almurbalarammi/Ashalmimilkala/
   creating: Addadshashanammu/Almurbalarammi/Ashalmimilkala/Assurnabitashpi/
   creating: Addadshashanammu/Almurbalarammi/Ashalmimilkala/Assurnabitashpi/Maelkashishi/
   creating: Addadshashanammu/Almurbalarammi/Ashalmimilkala/Assurnabitashpi/Maelkashishi/Onnissiralis/
   creating: Addadshashanammu/Almurbalarammi/Ashalmimilkala/Assurnabitashpi/Maelkashishi/Onnissiralis/Ularradallaku/
  inflating: Addadshashanammu/Almurbalarammi/Ashalmimilkala/Assurnabitashpi/Maelkashishi/Onnissiralis/Ularradallaku/fang-of-haynekhtnamet

❯ ls
      Addadshashanammu/      Addadshashanammu.zip

❯ cd Addadshashanammu

❯ ls
      Almurbalarammi/

❯ cd Almurbalarammi

❯ ls
      Ashalmimilkala/

❯ cd Ashalmimilkala

❯ ls
      Assurnabitashpi/

❯ cd Assurnabitashpi

❯ lds
zsh: command not found: lds

❯ ls
      Maelkashishi/

❯ cd Maelkashishi

❯ ls
      Onnissiralis/

❯ cd Om
cd: no such file or directory: Om

❯ cd Onnissiralis

❯ cd Ularradallaku

❯ ls
      fang-of-haynekhtnamet

❯ file fang-of-haynekhtnamet
fang-of-haynekhtnamet: ELF 64-bit LSB pie executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, for GNU/Linux 3.2.0, BuildID[sha1]=fcea24fb5379795a123bb860267d815e889a6d23, not stripped

❯ ./fang-of-haynekhtnamet
*ZAP!* **picoCTF{l3v3l_up!_t4k3_4_r35t!_d32e018c}**
```