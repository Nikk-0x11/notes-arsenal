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

### setup `meld` as git difftool & mergetool
```bash
$ git config --global diff.tool meld

$ git config --global difftool.meld.path "/usr/bin/meld"

$ git config --global difftool.prompt false

$ git config --global merge.tool meld

$ git config --global mergetool.meld.path "/usr/bin/meld"

$ git config --global mergetool.prompt false
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
$ git branch --move bad_branch_name corrected_branch_name

$ git branch -M main

# enter a commit message
$ git commit -m "commit message"

# push changes to the branch
$ git push -u origin main

# to a add a new remote: 
$ git remote add origin git@github.com:User/UserRepo.git 

# change the url of an existing remote repository: 
$ git remote set-url origin git@github.com:User/UserRepo.git

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
#### the soft reset won’t alter the working directory and the index
#### git reset --soft, which will keep your files, and stage all changes back automatically.

#### git reset --hard, which will completely destroy any changes and remove them from the local directory. Only use this if you know what you’re doing.

#### git reset --mixed, which is the default, and keeps all files the same but unstages the changes. This is the most flexible option, but despite the name, it doesn’t modify files.

```bash
# going back to HEAD
$ git reset --hard HEAD

# going back to commit before HEAD
$ git reset --hard HEAD^

# equivalent to "^"
$ git reset --hard HEAD~1

# going back two commits before HEAD
$ git reset --hard HEAD~2

# undoing hard reset
$ git reset --hard HEAD@{1}


# git commnds that can help resolve merge conflicts

## general
$ git status

$ git log --merge

$ git diff

# when git fails to start a merge
$ git checkout 

$ git reset --mixed

# when git conflicts arise during a merge

$ git merge --abort

$ git reset
```
