# OpenSSH

## What is OpenSSH?
OpenSSH stands for **Open Secure Shell**, it is a remote management tool that allows users to run commands on a machine remotely. It is included in most GNU/Linux distributions (and now even on Windows 10 and 11), however it was developed by the OpenBSD project. **SSH** is used by the client, while the server uses **SSHD** (SSH Daemon). By default it uses `port 22`, however that could be manually changed.

## Connecting to a server via OpenSSH Client
### Connect
```vim
ssh username@address [optional parameters]
``` 

Here, username would be the remote server's user name and address would be either server's ip-address or `local` if the remote server is in the same network as the client.
<br><br>
Optional Parameters:
* `-p [port]` for custom port 


### Disconnect
To disconnect, either type `logout` or `exit` in the terminal, or press `Ctrl+D`.

### Known host [~/.ssh/known_host]
This file contains **fingerprints** of all the remote servers ever connected by the system. Fingerprints are added to this file after the user accepts to connect to a new server very first time. <br>
This file helps OpenSSH client keep track of which servers it has or has not connected to.

## Configuring the OpenSSH Client
File to create/edit:
```vim
vim ~/.ssh/config
``` 
Content:
```vim
Host {custom_host_name}
    Hostname {ip-address}
    Port {22 by default}
    User {username}
```
Example:
```vim
Host homepc
    Hostname 192.168.0.1
    Port 6712
    User root

Host workpc
    Hostname 192.168.0.2
    Port 8693
    User ben
```
Running instance:
```vim
 ssh workpc
 ```
Same as typing:
```
ssh ben@192.168.0.2 -p 8693
```

## Using public/private keys
Binary to generate a new SSH key:
```vim
ssh-keygen 
```
Optional Parameters:
* `-c [comment]` comment for the key. by default this would be active user's name
* `-t [encryption]` specify what encryption algorithm to use; by default it uses RSA

#### Setting up server with generated-keys
1 Manual way:
<br>> copy the content of the public key 
<br>> connect to the remote server
<br>> create a file: `~/.ssh/authorized_keys`, and paste the content of the public key there.

2 Simpler way:
```sh
ssh-copy-id -i ~/.ssh/{key_name}.pub user@address
```

## SSH Server Configuration

#### Alternate Authentication method [host based]
Host has a list of machines that are allowed to connect

#### Change default port
In the file `/etc/ssh/sshd_config`, edit `#Port 22` to:
```sh
Port [new port]
```
\* new port should be less than 65,535

#### Turning off Password Authentication
It is recommended to use only private-public key authentication to connect to a server, however, by default servers allow Password Authentication as well. To diable that, edit the file at `/etc/ssh/sshd_config` with:
```sh
PasswordAuthentication no
PublickeyAuthentication yes
```
\* Make this change AFTER setting up private-public key authentication to avoid getting locked out of the server.


## Copying files from/to remote server
```sh
scp copy_from copy_to 
```
define location on remote server as: `user@address:/location/file`. For example, to copy a file from local storage to remote server, the command would be-<br> 
`scp ~/Downloads/file.txt ben@192.168.0.2:/home/ben/Downloads/file.txt`<br>
similarly, to copy from remote server to local storage, the command would be-<br>
`scp ben@192.168.0.2:/home/ben/Downloads/file.txt ~/Downloads/file.txt`

## Security
#### 1 Disabling root login
It's reccomended to use linux from an account other than the `root`. To disable root login, in the file `/etc/ssh/sshd_config`, change/add:
```sh
PermitRootLogin no
AllowUsers non-root-user root          // remove root from here*
```
\* Instead of `non-root-user`, enter user-name <br>
\*\* Non-root accounts can execute root commands by using the `sudo` utility.

#### 2 Disabling Protocol 1
There are 2 versions of SSH protocol are used, though protol 1 is quite vulnerable \([reference](https://en.wikipedia.org/wiki/Ssh#SSH-1)\) and thereforeit is not recommended to use.<br>
To disable the use of protocol 1, open the file: `/etc/ssh/sshd_config`, there search for `protol` and remove 1.<br>
```sh
protocol 2, 1
```
\* remove `1` from here

#### Checklist
- Change default port
- Have more than just the root user
- Disable remote authentication to root user
- Disable password authentication altogether (only allow keys)
- Add password to keys
- Disable Protocol 1

## Troubleshooting
Log file is stored at `/var/log/auth.log`. Tail it to check what's going on in real time.
```sh
sudo tail -f /var/log/auth.log
```

### Resource: https://youtu.be/YS5Zh7KExvE
