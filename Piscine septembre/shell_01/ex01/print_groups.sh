#!/bin/sh
#(echo -n "$FT_USER : "; id -nG $FT_USER) | cat | sed 's/ /,/g'
groups $FT_USER | sed 's/ /,/g'

#add FT_USER=student
#export FT_USER (to environement)