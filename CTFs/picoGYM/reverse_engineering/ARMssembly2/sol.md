# ARMssembly 2

got a file named `chall_2.S`

there is a function named

```
func1:
    sub sp, sp, #32
    str w0, [sp, 12] // 4189673334
    str wzr, [sp, 24] // 0
    str wzr, [sp, 28] // 0
    b   .L2
```

and in `.L3`

```
.L3:
    ldr w0, [sp, 24]
    add w0, w0, 3    //w0 += 3
    str w0, [sp, 24]
    ldr w0, [sp, 28]
    add w0, w0, 1        //w0 += 1
    str w0, [sp, 28]
```

there is a loop

```py
n = 4189673334
t = 0
for i in range(n + 1):
    t += 3
print(hex(t))
```

this loop will take a very long time to complete so I improved it to

```py
n = 4189673334
t = 0
print(hex(n \* 3))
```
