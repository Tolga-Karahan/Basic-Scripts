#!/bin/bash

# Sistemde hesabi olan kullanicilari id: kullanici-adi seklinde listeler

i=0
IFS=:
while read uname ux uid rest
do
	printf "%-5d: %-20s" $uid $uname
	((i++)) 
	if [[ i -eq 4 ]]
	then
		echo ""
		i=0
	fi
done < /etc/passwd
echo ""

