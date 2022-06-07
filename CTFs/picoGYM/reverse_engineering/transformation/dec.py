enc_str = "灩捯䍔䙻ㄶ形楴獟楮獴㌴摟潦弸弲㘶㠴挲ぽ"

for i in range(len(enc_str)):
    print(chr(ord(enc_str[i]) >> 8))
    print(chr((ord(enc_str[i]))-((ord(enc_str[i]) >> 8) << 8)))
