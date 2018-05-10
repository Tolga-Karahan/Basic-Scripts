#!/bin/bash

clear
echo "1. Date and Time"
echo
echo "2. Directory listing"
echo
echo "3. Users information"
echo
echo "4. Current Directory"
echo
echo -n "Enter choice [1-4] or enter done to exit:"

read choice

until [[ $choice = done ]]
do 
	case $choice in
	    	"1") date;;
		"2") ls -l;;
		"3") who;;
		"4") pwd;;
		*) echo wrong choice;;
	esac
	echo	
	echo "1. Date and Time"
	echo
	echo "2. Directory listing"
	echo
	echo "3. Users information"
	echo
	echo "4. Current Directory"
	echo
	echo -n "Enter choice [1-4] or enter done to exit:"

	read choice
done
clear
