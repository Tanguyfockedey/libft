#!/bin/sh
#git check-ignore .*
#git check-ignore *
git ls-files -io --exclude-standard
#ignored files are in .git/info/exclude or .gitignore