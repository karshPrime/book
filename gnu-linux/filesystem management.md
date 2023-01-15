# Filesystem Management

## Configuring Disk Partitions and Filesystem
Regardless of type, each hard disk or SSD is divided into sections called **partitions**. To use these partitions, they must be formatted with a filesystem. A **filesystem** is a structure that specifies how data is stored in the disk.

By default, maximum of only four major partitions (called **primary partitions**) can be created on a disk. To overcome this limitation, one of these four partitions could be labeled as "extended"; these **extended partitions** can then contain end number of smaller partitions- **logical drives**. These all different logical drives must also contain a filesystem.

First SATA/SCSI device in the system are referred to as **sda**; first partition being labeled **sda1**, second being **sda2** and so on, whereas logical drives inside extended partitions are labled **sda5**, **sda6** and so on.

A table of all partition information for a certain hard disk or SSD is stored in the first readable sector outside all partitions; called **Master Boot Record (MRB)**. The MRB is limited to hard disks that are less than 2TB in size. Newer hard disks and hard disk larger than 2TB use a **GUID Partition Table (GPT)** isntead of MRB. They both are funcationally equivanet though.

