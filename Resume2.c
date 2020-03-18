#include <stdio.h>
#include <stdlib.h>
#include <string>
Resume of GitHub Commands DATOS 1A
-------GIT-------
git install (sudo apt git install) // to install the basic git.
git config //One of the most used commands in git is git config, which can be used to establish user-specific settings, such as email, a preferred algorithm for diff, username and format type, etc ...
$ git config --global user.name "Neguipo": // to configure the name of Commits
$ git config --global user.email "Neguipo@example.com" : // to config the email 
git init: // We can execute that command to locally create a repository with GIT and thus use all the functionality that GIT offers. It is enough to be located inside the folder where we have our project and execute the command. When we add files and a commit, the default master branch will be created.
git help: // Show a list with the most used commands in GIT.
git add + path: // Add the files we indicate to the repository.
git add -A: // Add to the repository ALL the files and folders that are in our project, which GIT is not following.
git clone: // to clone an archive 
git status: // It indicates the status of the repository, for example, which are modified, which are not followed by GIT, among other characteristics
git commit -m "message" + files: // Commits the files that we indicate, in this way our modifications are saved.
git commit -am "message": // Commits the files that have been modified and GIT is following them.
git branch: // It shows us a list of the branches that exist in our repository.
git diff: //show the new changes 
git remote set-url origin <url> //Change remote
git remote rm <name / origin> //Remove repository
git checkout -b (Name): // Create a new branch and automatically GIT changes the created branch, cloning the branch from where we execute the command.
git checkout (Name): // It is used to move between branches, in this case we go to the branch that we indicate in the command.
git merge (Name): // Merge between two branches, in this case, the address of the merger would be between the branch that would indicate in the command, and the branch where we would be located.
git push origin master// upload the repository.
git rm: //to eliminate an archive.
git commit -amend: //At any time you may want to undo something. Here we will review some tools Basics used to undo changes you have made. Be careful, sometimes it is not possible get something back after you've undone it. This is one of the few areas where Git can lose part of your job if you make a mistake.
git remote: //Add remote repository git remote add origin <url>
git tag: //Show a list of all tags
git tag -a <verison> - m "this is version x" : //Create a new tags
git fetch: //Verifica cambios en el repositorio online con el local
git head : //take of an archive of the commit
//Those are some of the basic local commands used in github to perform basic tasks and operations such as creating branches, changing branches, copying, uploading, deleting, creating, undoing etc ... in the end we can conclude that these commands are the basic ones there are several parallel commands or subcommands of the same branch but for special cases.
"-Neguib Metri. Good afternoon teacher"