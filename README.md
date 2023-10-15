# 23Mx2023

------------------------------------------
https://www.freecodecamp.org/news/create-and-sync-git-and-github-repositories/#:~:text=To%20synchronize%20our%20local%20and,repository%20using%20the%20push%20command.

git init

------------------------------------------

How to Commit Files to the Local Repository
Whenever we create new files, change existing files, or delete files, 
we commit those changes to our local repository. 
This ensures that the repository tracks the current status of our project.

Committing files to a local repository requires two steps:

Stage
Commit
First, add the files to the Git staging area:

git add .

We tell Git which files we want to include in that commit by adding them to a staging area. 
Staging allows us to selectively choose which changes to include in a commit.

Using the . (period) adds all of the files in the working folder (and its subfolders) to the staging area. 
If you only want to add specific files, you can list them instead.

------------------------------------------

Next, we commit the staged files to the local repository:

git commit -m "Initial commit"

This command commits the files in the Git staging area, to the local repository.

The -m option is for a commit message. Follow the -m with the message, in quotes. 
Be sure to define a clear message describing the changes you are committing.

------------------------------------------

How to Tell Git about GitHub
Before you can synchronize the local and remote repositories, you need to establish a connection between them. 
Basically, you need to tell your local repository where to find the remote repository.

We identify a remote repository by its URL. 
In Figure 4 above, notice the green Code button. 
Click that button to view details about the repository (Figure 5).

------------------------------------------

Ensure that the HTTPS tab is selected, and click the copy icon to copy the URL for this GitHub repository.

Back in the command window on your local machine, add the remote repository to the local repository. 
Then list the remotes to confirm that the remote was created.

git remote add recipes-gh https://github.com/DeborahK/recipes.git
git remote

The remote add command adds the remote repository at the provided URL. 
And it lets you assign a nickname for that repository so you don't have to type the URL 
when referring to the remote repository.

A common nickname for the remote repository is origin, but some find that name a bit confusing,
especially if the remote repository was not the origin of the project. 
In that case, I sometimes use the name of the local repository with a -gh (for GitHub) as the 
remote repository nickname, so I can easily remember it. But feel free to use any name.

The remote command by itself displays the list of remotes that your local repository knows about. 

------------------------------------------

Our local Git repository now knows where to find its associated remote repository. 
The next step is to synchronize the repositories so their commit history matches.

How to Synchronize Local and Remote Repositories
To synchronize our local and remote repositories, 
we first fetch the change history from the remote repository and merge it 
into our local repository using the pull command. 
Then we push our local change history to the remote repository using the push command.

If you would prefer to sync repositories using VS Code, check out this video:

------------------------------------------

To pull from the remote repository and merge to our local repository using a Git command:

git pull recipes-gh main --allow-unrelated-histories

dir		// On windows
OR
ls		// On a mac

The pull command requires the nickname of the remote repository (recipes-gh) and the name of the branch. 
Since we haven't created any additional branches, we specify the primary branch (main).

The --allow-unrelated-histories flag is required the first time we pull because we want to 
merge two repositories that were created separately and don't currently share a related history.

After the first time, the git pull command doesn't require that flag:

git pull recipes-gh main


In either case, the pull command looks up the appropriate URL for the remote repository using the
provided nickname ( recipes-gh ).

Then it fetches the commit history and other data from the specified branch ( main ) of the 
remote repository that is not in that branch of the local repository.

It merges that data into the local repository. 
If there are any conflicts, you'll need to manually resolve them before Git will merge the changes.

Lastly, it updates the local working folder with all files from the most recent commit.

Using the dir command on Windows, or the ls command on a Mac, 
we see that our local repository now has our original files plus 
the license and readme files from our remote repository as shown in Figure 7.

------------------------------------------

Now our local repository contains all of the commit history from the remote repository.

Next, we push the change history from our local repository to our remote repository using the push command.

git push recipes-gh main

The push command requires the name of the remote repository (recipes-gh) and the name of the branch. 
Since we haven't created any additional branches, we specify the primary branch (main).

This command merges the local change history to the remote repository. 
If there are any conflicts, you'll need to manually resolve them before Git will merge the changes. 
See Figure 8 for the result:

------------------------------------------

To confirm that our remote repository includes all of our files, 
view the remote repository on GitHub. 
In Figure 9, we see the files from our local repository are now in our 
remote repository and our repositories are in sync!

In summary, syncing your local and remote repositories involves 
pulling any changes from the remote repository to your local repository, 
resolving conflicts, and then pushing your local changes back to the remote repository.

That's it for the first scenario. We created a local repository from our existing files. 
Then we created a remote repository, set up a connection to that remote repository, 
and synchronized our files. 
Repeat the pull and push commands to sync the repositories as you work on your project.

------------------------------------------
