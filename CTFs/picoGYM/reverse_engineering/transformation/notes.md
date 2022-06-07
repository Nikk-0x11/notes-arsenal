# Transformation notes

got a file named `enc`

with some python code `''.join([chr((ord(flag[i]) << 8) + ord(flag[i + 1])) for i in range(0, len(flag), 2)])`

**file type**

```
➜ transformation file enc
enc: Unicode text, UTF-8 text, with no line terminators
```

**content of file**

```
➜  transformation cat enc
灩捯䍔䙻ㄶ形楴獟楮獴㌴摟潦弸弲㘶㠴挲ぽ%
```

**line break**

```
➜  transformation cp enc test
➜  transformation nvim test
➜  transformation cat test
灩 - Yan
捯 - 捯 (Dáo)
䍔 - don
䙻 - Gao
ㄶ - ㄶ (nh)
形 - shape
楴 - 楴
獟 - jellyfish
楮 - Kozo
獴 - Meerkat
㌴ - ㌴
摟 - hug
潦 - flooded
弸 - full
弲 - Bute
㘶 - 㘶 (Jié)
㠴 - 㠴 (Rèn)
挲 - fondle
ぽ - Po
```

```python
enc_str = "灩捯䍔䙻ㄶ形楴獟楮獴㌴摟潦弸弲㘶㠴挲ぽ"

for i in range(len(enc_str)):
    print(chr(ord(enc_str[i]) >> 8))
    print(chr((ord(enc_str[i]))-((ord(enc_str[i]) >> 8) << 8)))
```
