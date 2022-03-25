## Git
### Setup ( personal-preference )
```bash
$ ssh-keygen -t 4096 -C "mewmew@example.com" 

$ eval "$(ssh-agent -s)" 
> Agent pid 59566 

$ ssh-add ~/.ssh/id_rsa $ cat ~/.ssh/id_rsa.pub 
# Then select and copy the contents of the id_ed25519.pub file 
# displayed in the terminal to your clipboard

$ ssh -T git@github.com 
> Hi {username}! You've successfully authenticated, but GitHub does not provide shell access.
```

### git usage commands
```bash
# Configure the author name and email address to be used with your commits.
$ git config --global user.name "Mew Mew"
$ git config --global user.email mew@example.com

# initiate git in the current directory
$ git init

# Create a working copy of a local repository
$ git clone /path/to/repository

## create a working copy (remote server)
$ git clone username@host:/path/to/repository

# add all files for commit
$ git add .
 
# check git status
$ git status

# change branch to main
$ git branch -M main

# enter a commit message
$ git commit -m "commit message"

# push changes to the branch
$ git push -u origin main

# push changes to Github
$ git push

# create a new branch
$ git checkout -b test

# list all branches in your repo
$ git branch

# delete a branch
$ git branch -d <branchname>

# fetch and merge changes
$ git pull

# merge changes of a diff branch into your active branch
$ git merge <branchname>

# check commit logs
$ git log
```
