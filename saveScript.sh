#!/bin/sh
find . -not \( -path './.git/*' -o -path './Shell00/*' -o -path './Shell01/*' \) -type f \( -name '.*' -o -name '*.sw*' -o \( -not -name '*.pdf' -a -not -name 'Makefile' -a -not -name '*.sh' -a -not -name '*.c' -a -not -name '*.h' \) \) -print -delete
git status
git add .
git status
git commit -m '1337 pool'
git log
git push
git log