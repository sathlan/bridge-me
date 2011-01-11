#!/bin/sh
set -e

brdg=`echo $0 | sed -E -e 's:^.*/if-(.*):\1:`

if ! ifconfig | grep -q $brdg; then
    if-create $brdg
fi

ifconfig | grep -q "member: $1" || if-brg $brdg $1
