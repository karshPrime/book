# Git Notes

## Configure
- `System`: All users
- `Global`: ALl repositories of the current user
- `Local`: Only current repository

User name - <br>
`git config --global user.name "user name"`

User email - <br>
`git config --global user.email user@service.com`

Default Editor - <br>
`git config --global core.editor "editor name"`

Default branch - <br>
`git config --global init.defaultBranch main` 

To edit config file in default editor <br>
`git config --global -e`

EOL setting <br>
Linux/MacOS: `git config --global core.autocrlf input` <br>
Windows: `git config --global core.autocrlf true`

Get saved config-
`git config --list`



## Creating Snapshots

### Initializing a Repository:
```sh
$ cd project
$ git init
```

### Making commits
Changes can be commited to git by first `staging` them. To stage changes, type:
```sh
git add changed_file_name.txt
```
or to `stage` all changes:
```sh
git add -A
```
ones these changes have been staged, they can all be commited together by either:
```sh
git commit
```
\* without any argument, which would open default editor listing all the changes; or by typing:
```sh
git commit -m "commit name"
```
Staging could be ignored and changes could be commited directly by:
```sh
git commit -a
```

### Git Workflow
**Files are modified < They're added to staging area < they're commited.**<br>
\*Files must be reviewd at the staging area before commiting them.

Adding Files to staging area: `git add File`<br>
Making commits: `git commit -m "Commit name"`

Each commit contains:
- An unique ID
- Message/Commit Name
- Date and Time
- Author
- Snapshot

View files at staging area- `git ls-files`

To remove files from a repo, `git rm file(s)` is a better alternative than rm `file(s)` as it also removed the file from staging area.



## Cloning repositories
To get a copy of some existing repository- `git clone [url] <local name>` <br> For example;
```sh
# cloning via https
git clone https://github.com/ut-kr/Notes
```
by not entering a local name, this would create a local copy Notes repository at current directory with the name `Notes`.
```sh
# cloning via ssh
git clone git@github.com:ut-kr/Notes.git ut_notes
```
but when local name is specified, the linked repository will be saved locally on the current directory with the name specified, `ut_notes` here for example.



## Pushing repositories

### via SSH \[recommended]
After adding configuring github(for example) with public key,
```sh
$ git remote add origin git@github.com:{USERNAME}/{REPOSITORY_NAME}
$ git branch -M {BRANCH NAME; usually main}
$ git push -u origin {SAME BRANCH NAME AS ABOVE}
```
\*same can be done via **http** though that would work ONLY if you dont have 2fa on GitHub



## Git Branches
By default, every commit that's made is made on the `main` branch. Sure, working on just one branch is very much possible; however, when working on a project as a team or even when submitting **Pull-Requests** creating branches actually makes the process a lot easier and more convenient.<br>

### Create and move to a new branch:
```sh
git checkout -b {branch name}
```
With this, all future changes would be made within the new branch and wouldn't affect main branch. <br>
\* to just move between branches that already exist, ignore `-b` argument.

### Push new branch
```sh
git push -u origin {branch name}
```
push changes within this branch (and the branch itself) to the remote (eg: github/gitlab)

### List all branches
```sh
git branch -a
```

### Pulling changes
```sh
git pull origin {branch name}
```

### Deleting branch
Delete locally:
```sh
git branch -D {branch name}
```
Delete on remote server:
```sh
git push {remote name} -d {branch name}
```


## Git Restore
Restore specified paths in the working tree with some contents from a restore source. If a path is tracked but does not exist in the restore source, it will be removed to match the source.<br>
The command can also be used to restore the content in the index with `--staged`, or restore both the working tree and the index with `--staged --worktree`.<br>
By default, if `--staged` is given, the contents are restored from HEAD, otherwise from the index. Use `--source` to restore from a different commit.

Syntax
```sh
git restore [<options>] [--source=<tree>] [--staged] [--worktree] [--] <pathspec>…​

git restore [<options>] [--source=<tree>] [--staged] [--worktree] --pathspec-from-file=<file> [--pathspec-file-nul]

git restore (-p|--patch) [<options>] [--source=<tree>] [--staged] [--worktree] [--] [<pathspec>…​]
```



## .gitignore
Syntax: 
* Blank lines or lines starting with # are ignored.
* Standard glob patterns work, and will be applied recursively throughout the entire working tree.
* start patterns with forward slash (/) to avoid recursivity.
* end patterns with forward slash (/) to specify a directory.
* You can negate a pattern by starting it with an exclamation point (!).

For example:
```sh
.gitignore
-------------------------------
# ignore all .a files
*.a

# but do track lib.a, even though you're ignoring .a files above
!lib.a

# only ignore the TODO file in the current directory, not subdir/TODO
/TODO

# ignore all files in any directory named build
build/

# ignore doc/notes.txt, but not doc/server/arch.txt
doc/*.txt

# ignore all .pdf files in the doc/ directory and any of its subdirectories
doc/**/*.pdf
```
\* Usually a repository only has a single `.gitignore` file- in its root
directory (which applies recursively to the entire repository), however, it is 
possible to have additional `.gitignore` files in subdirectories. The rules in these
nested .gitignore files apply only to the files under the directory where they are
located.



## `git diff`
This command allows the developer to view all changes made in a project (within all files). Optionally, file name can be entered to only get changes in that file.
```sh
git diff {filename}
```
\*`git diff` only works for tracked files.


## `git log`
without any argument, `git log` command displays history of all the commits made in the repository. 
```gh
commit 14d53dda4cd22803a950515p0c48ba71aea2f432
Author: user <user@email.com>
Date:   Fri Jul 12 05:43:04 2022 +1100

    another commit

commit 823e26711a2a591b82044d6ju09aadb47e93734c
Author: user <user@email.com>
Date:   Fri Jul 12 05:37:50 2022 +1100

    commit 2

commit 9fbccd80db93268affcbff311a206a0f92ed6dec
Author: user <user@email.com>
Date:   Fri Jul 12 05:35:31 2022 +1100

    First Commit
```
with `-p` tag, however, we'd have more detailed 
