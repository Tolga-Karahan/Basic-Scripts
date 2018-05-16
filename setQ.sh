#!/bin/bash

# /export/home dizinindeki kullanicilarin kotalari
# arguman olarak alinan kullanicidan daha az ise
# ve ya kota bilgisi yoksa arguman olarak alinan
# kullanicinin kota bilgileri tahsis edilir

guest=(`quota -v $1 | tail -1`)

for user in `ls /export/home/master`
do
	user-quota=(`quota -v $user | tail -1`)
	
	if [ $(quota -v $user | wc -l) - eq 2 -o
		${user-quota[2]} -lt ${guest[2]} ]
	then
		quota -p $1 $user
	fi
done


