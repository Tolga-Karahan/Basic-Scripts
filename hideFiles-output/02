#!/bin/bash
#Arguman ile belirlenen dosyadaki satir sayisini sayar

if [ -f "$1" ]
then
	declare -i i=0
	
	while read LINE
	do
		i=i+1
	done < "$1"
	echo $i
fi
