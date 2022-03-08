```
❯ wget <https://artifacts.picoctf.net/c/90/runme.py>
--2022-03-04 01:21:10--  <https://artifacts.picoctf.net/c/90/runme.py>
SSL_INIT
Loaded CA certificate '/etc/ssl/certs/ca-certificates.crt'
Resolving artifacts.picoctf.net (artifacts.picoctf.net)... 13.35.133.8, 13.35.133.114, 13.35.133.2, ...
Connecting to artifacts.picoctf.net (artifacts.picoctf.net)|13.35.133.8|:443... connected.
HTTP request sent, awaiting response... 200 OK
Length: 270 [application/octet-stream]
Saving to: ‘runme.py’

runme.py                                                    100%[========================================================================================================================================>]     270  --.-KB/s    in 0s

2022-03-04 01:21:11 (22.5 MB/s) - ‘runme.py’ saved [270/270]

❯ cat runme.py
#!/usr/bin/python3
################################################################################
# Python script which just prints the flag
################################################################################

flag ='picoCTF{run_s4n1ty_run}'
print(flag)

❯ python3 runme.py
**picoCTF{run_s4n1ty_run}**
```