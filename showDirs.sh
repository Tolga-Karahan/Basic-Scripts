#!/bin/bash
# Tum dizin ve altdizin hiyerarsisini ve her bir
# dizinde bulunan dosya sayisini gosterir

dir=$2
[ -z $2 ] && dir=~
entry=($dir/*)
echo "$1"`basename $dir`"(${#entry[*]})"

for fd in ${entry[*]}
do
	[[ -d $fd ]] && $0 "$1 " $fd
done	
	


