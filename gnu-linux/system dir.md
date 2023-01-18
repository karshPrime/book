# Root directories

| root dirs   | purpose                                                             |
|-------------|---------------------------------------------------------------------|
| /           | the root directory. This is where the whole tree starts.            |
| /bin        | containes command binaries which are needed in single user mode     |
| /sbin       | same as /bin, but only contains binaries that super user could use  |
| /lib        | contains libraries that are shared by binaries at /bin              |
| /usr        | used as a cross-over for people. It  holds read-only files          |
| /opt        | contains add-on packages that contain static files                  |
| /boot       | contains files that are required for a system to boot               |
| /dev        | contains device files, which refer to physical devices              |
| /proc       | it is a mount point for the proc file system, which provides infor about running <br> processes and the kernel.                                              |
| /mnt        | it is a mount point for a temporarily mounted file system           |
| /run        | Run-time variable data: Information about the running system since last boot,<br> e.g., currently logged-in users and running daemons.                           |
| /srv        | contains site-specific data that is served by this system.          |
| /tmp        | contains temporary files; usually gets empty on reboots             |
| /var        | contains files which may change in size, such as spool and log files|
| /etc        | contains configuration files which are local to the machine.        |
| /sys        | contains information about devices, drivers, & some kernel features |
| /home       | contains user home directories, such as Desktop, Downloads and ~    |
| /root       | home directory for root user                                        |
| /lost+found |   |

### /usr/bin vs /bin
- /bin (and /sbin) were intended for programs that needed to be on a small / partition before the larger /usr, etc. partitions were mounted. These days, it mostly serves as a standard location for key programs like /bin/sh, although the original intent may still be relevant for e.g. installations on small embedded devices.
- /usr/bin is for distribution-managed normal user programs.
- /usr/local/bin is for normal user programs not managed by the distribution package manager, e.g. locally compiled packages. You should not install them into /usr/bin because future distribution upgrades may modify or delete them without warning.


# Other directories
### Wi-Fi Passwords 
```
/etc/wpa_supplicant/wpa_supplicant.conf
```