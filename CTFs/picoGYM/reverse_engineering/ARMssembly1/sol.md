# ARMssembly 1

got a file named `chall_1.S`

looking at the function

```
func:
	sub	sp, sp, #32
	str	w0, [sp, 12] 	## I want this, call it x
	mov	w0, 79
	str	w0, [sp, 16] 	## *(sp + 16) = 79
	mov	w0, 7
	str	w0, [sp, 20] 	## *(sp + 20) = 7
	mov	w0, 3
	str	w0, [sp, 24] 	## *(sp + 24) = 3
	ldr	w0, [sp, 20] 	## w0 = *(sp + 20) = 7
	ldr	w1, [sp, 16] 	## w1 = *(sp + 16) = 79
	lsl	w0, w1, w0	 	## w0 = 79 << 7 = 10112
	str	w0, [sp, 28] 	## *(sp + 28) = 10112
	ldr	w1, [sp, 28] 	## w1 = *(sp + 28) = 10112
	ldr	w0, [sp, 24] 	## w0 = *(sp + 24) = 3
	sdiv	w0, w1, w0 	## w0 = 10112 // 3 = 3370
	str	w0, [sp, 28]	## *(sp + 28) = 3370
	ldr	w1, [sp, 28]	## w1 = *(sp + 28) = 3370
	ldr	w0, [sp, 12]	## w0 = x
	sub	w0, w1, w0		## w0 = 3370 - X
	str	w0, [sp, 28]
	ldr	w0, [sp, 28]
	add	sp, sp, 32
	ret
	.size	func, .-func
	.section	.rodata
	.align	3
```

I simplified whole function using ## there

at the end convert decimal value to hexadecimal to get the flag.
