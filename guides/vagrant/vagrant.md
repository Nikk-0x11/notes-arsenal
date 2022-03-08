Vagrant is an open-source software product for building and maintaining portable virtual software development environments; e.g., for VirtualBox, KVM, Hyper-V, Docker containers, VMware, and AWS. It tries to simplify the software configuration management of virtualization in order to increase development productivity.

uhhhh..... That’s just some googled stuff... UK already... welp welp here we gooooo

-   get dat box
-   Install dat box and boot into it
-   Done xD

[Vagrant Boxes](https://app.vagrantup.com/boxes/search) - Here

```bash
$ mkdir -p ~/vagrant/ubuntu && cd ~/vagrant/ubuntu 

$ vagrant init ubuntu/trusty64 

$ vagrant up 

$ vagrant ssh 

$ vagrant box list 

$ vagrant box remove
```

The things that we did above are:

-   Creates a folder for dat box.
-   Downloads the box and puts it in `~/Virtualbox\\ VMs`.
-   `vagrant up` is used to boot into the box.

### Vagrant Shared Folder

Now so as to transfer files you can simply `cd ~/vagrant` and use it just fine but do note that this might not work in cases where vb guest additions are not proper inside the guest operating system.

So you will have to install it, so as to install it all you need to do is:

Inside the Guest OS

```bash
$ cd ~

$ wget -c <https://download.virtualbox.org/virtualbox/6.1.22/VBoxGuestAdditions_6.1.22.iso> -O meow.iso 

# Here go to the link and notice the version 6.1.22.iso part, that's important.
$ sudo mount ~/meow.iso -o loop /mnt

$ cd /mnt

$ sudo VBoxLinuxAdditions.run --nox11

# --nox11 basically installs it via terminal and allows you to open VM in GUI
$ reboot

# Expected shared folder
$ cd /vagrant
```