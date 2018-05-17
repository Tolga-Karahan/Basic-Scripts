# !/bin/bash
# 1. arguman ile belirtilen kullanicinin home dizininde bulunan
# public_html dizinine 2. arguman ile belirtilen html dosyasini
# kopyalar. public_html dizini bulunmuyorsa olusturulur

(( $# < 2 )) && echo "usage: $0 <username> <filepath>" && exit
cpwd=`pwd`
userhome=`cat /etc/passwd | grep "^$1:" | cut -d: -f6`
cd $userhome
[[ -d public_html ]] || mkdir public_html
cp $cpwd/$2 ./public_html
cd $cpwd



