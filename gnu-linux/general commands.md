# Basic Commands

## Introduction
* `cal` : shows calendar
* `date` : displays current time and date
* `pwd` : location of where we are currently located
* `exit` : to end a terminal session
* `man {program}` : shows the manual page of command
* `file {location/file}` : to see the symbolic link of file
* `.` : refers to the current dir
* `..` : refers to the parent dir

## Changing work directory
* `cd` : change directory
* `cd (without path)` : change to the home dir
* `cd ~USERNAME` : refers to the home dir of the user
* `cd ~` : refers to own home dir <br>

## Create directory
* `mkdir` : to create directory
* `mkdir -v` : shows message for each created directory
* `mkdir dir1 dir2` : can also create multiple directory
* `mkdir dir1/dir2` : to create directory elsewhere (if parent dir doesn’t exist, it will fail)
* `mkdir -p dir1/dir2` : creates parent dir as needed
* `mkdir {2008..2017}-{01..12}` : creates folders performing brace expansion

## Display contents of a directory
* `ls` : displays the content of current dir
* `ls {path}` : to show contents of non-current dir
* `ls ..` : refers to the parent of current dir
* `ls -l {path}` : to see the symbolic link of file (long listing)

## Read files
* `less (path)` : to open any text file
* `less -N` : to display with line numbers (when working with codes)
* `less (path)/*` : to show several text files
* `cat file` : read content of any text file
* `head {file}`: prints the first 10 lines
* `tail {file}`: prints the last 10 lines
* `head/tail -n {count} {file}` : specifies the lines of print
* `tail -f {file}` : read the file as it is updated. good for reading logs in real time.

## Move/rename files/direcotry
* `mv {location1/file} {location2/file}` : to move (and rename) files
* `mv -v {location1/file} {location2/file}` : explains what is being done
* `mv {location1/file1} {location1/file2} {location1/file3} {location2}` : to move multiple files

## Copy files/direcotry
* `cp {source} {dest}` : to copy file to another destination
* `cp {dir} {dest}` : to copy dir to another destination
* `cp -r {dir} {dest}` : to copy dir with contents, if dest doesn’t exist it will be created

## Remove files/direcotry
* `rm {file/dir}` : to delete files
* `rm -i {file/dir}` : prompts before every removal
* `rm -v {file/dir}` : explains what is being done
* `rm -r {file/dir}` : removes file with their content

## Symbolic Links (file/dir Shortcuts)
* `ln` : creates symbolic links between files
* `ln {target} {linkname}` : linkname links to target
* `ln {target}` : creates symbolic link to that file with the same name in the current dir

## Print information
* `echo` : displays simple message
* `echo -e` : enables using backslash-escaped characters
* `echo *` : displays the listing of files of current dir
* `echo ~USERNAME` : shows the abs path of home dir of user
* `echo $(( 5 + 5 ))` : performs arithmetic expressions OUTPUT: 10
* `echo abc{A,B,C}mm` : performs brace expansion OUTPUT: abcAmm abcBmm abcCmm
* `echo num_{1..3}` : OUTPUT: num_1 num_2 num_3 (also works for letters)
* `echo $( ls _ )` : firs, the command inside $( ) will be executed, then echo
* `echo \(character)` : \ is used to escape character conflicts

## Find text
* `grep {to_search} {file} `: print lines matching a pattern [searches in file]
* `grep -i `: to ignore case sensitiveness
* `grep -v `: selects non-matching lines
* `grep -c `: prints a count of matching lines

## User/System info
* `who` : lists all logged in users
* `whoami` : displays your username
* `id` : displays the numbers associated with your user account name- User IDs (UIDs), and group names- Group IDs (GIDs).
* `uname`: display system information