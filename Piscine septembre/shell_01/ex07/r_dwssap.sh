#!/bin/sh
cat /etc/passwd | sed "s/#.*//" | sed "s/:.*//" | sed "0~2d" | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | perl -pe 's/\n/, / unless eof; s/\n/./'
#                remove comment, remove eol,     every other, rev word, rev list, from ftline1 to ftline2,     all on one line
#								 cut -d ":" -f1																   p=work like sed, e=execute command
#																											   sed "s/$/, /" | tr -d "\n"