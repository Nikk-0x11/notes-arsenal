# shop

got an ELF executable named `source`

```
➜  shop file source
source: ELF 32-bit LSB executable, Intel 80386, version 1 (SYSV), statically linked, Go BuildID=PjavkptB2tPNbBJewQBD/KlDP1g_fpBnKyhti11wQ/JIWBEgtPAt3YPE6g8qd7/pWlMkjZuAYGqbSv46xuR, with debug_info, not stripped
```

```
➜  shop ./source
Welcome to the market!
=====================
You have 40 coins
        Item            Price   Count
(0) Quiet Quiches       10      12
(1) Average Apple       15      8
(2) Fruitful Flag       100     1
(3) Sell an Item
(4) Exit
Choose an option:
1
How many do you want to buy?
-69
You have 1075 coins
        Item            Price   Count
(0) Quiet Quiches       10      12
(1) Average Apple       15      77
(2) Fruitful Flag       100     1
(3) Sell an Item
(4) Exit
Choose an option:
2
How many do you want to buy?
1
panic: open flag.txt: no such file or directory

goroutine 1 [running]:
main.check(0x810fb10, 0x1867a1e0)
        /opt/hacksports/shared/staging/Shop_2_2090033420886329/problem_files/source.go:125 +0x36
main.get_flag()
        /opt/hacksports/shared/staging/Shop_2_2090033420886329/problem_files/source.go:118 +0x5b
main.menu(0x186860c0, 0x3, 0x4, 0x18686100, 0x3, 0x4, 0x433, 0x0, 0x3, 0x4, ...)
        /opt/hacksports/shared/staging/Shop_2_2090033420886329/problem_files/source.go:77 +0x568
main.openShop()
        /opt/hacksports/shared/staging/Shop_2_2090033420886329/problem_files/source.go:28 +0x1aa
main.main()
        /opt/hacksports/shared/staging/Shop_2_2090033420886329/problem_files/source.go:18 +0x17
```

from nc

```
➜  shop nc mercury.picoctf.net 42159
Welcome to the market!
=====================
You have 40 coins
        Item            Price   Count
(0) Quiet Quiches       10      12
(1) Average Apple       15      8
(2) Fruitful Flag       100     1
(3) Sell an Item
(4) Exit
Choose an option:
1
How many do you want to buy?
-69
You have 1075 coins
        Item            Price   Count
(0) Quiet Quiches       10      12
(1) Average Apple       15      77
(2) Fruitful Flag       100     1
(3) Sell an Item
(4) Exit
Choose an option:
2
How many do you want to buy?
1
Flag is:  [112 105 99 111 67 84 70 123 98 52 100 95 98 114 111 103 114 97 109 109 101 114 95 55 57 55 98 50 57 50 99 125]
```

flag output is in ASCII format

```py
s = "112 105 99 111 67 84 70 123 98 52 100 95 98 114 111 103 114 97 109 109 101 114 95 55 57 55 98 50 57 50 99 125"
nums = s.split(" ")
flag = ""
for num in nums:
    flag += chr(int(num))
print(flag)
```

```
➜  shop python3 sol.py
picoCTF{b4d_brogrammer_797b292c}
```
