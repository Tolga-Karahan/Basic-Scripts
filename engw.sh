#!/bin/bash
# Uzaktan login olan kullaniciya en az 8 karakterli
# bir İngilizce kelime gosterir

un=`who | grep $USER | wc -l`
if [[ $un -eq 1 ]]
then
	clear
	ws=(`cat /usr/bin/words`)
	while :
	do
		n=$(($RANDOM%${#ws[*]}))
		if [[ ${ws[$n]} -gt 1 ]]
		then
			break
		fi
	done
	echo ${ws[$n]}
fi	
