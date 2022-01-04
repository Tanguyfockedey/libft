#!/bin/sh
ls -l | sed '0~2d'
#ls -l | sed -n '1~2p'
#ls -l | sed -n 'p;n'