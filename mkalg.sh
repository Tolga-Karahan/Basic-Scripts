# !/bin/bash
# +3\*2/2 ve ya -3+4\*2 ve ya 2+5+6/3 formatında
# aritmetik ifadeleri degerlendiren formata
# uymuyorsa uyarı yazisi yazdiran script

(( $# < 1 )) && echo "usage: $0 <exp>" && exit
reg="^(\+|-)?[1-9][0-9]*((\+|-|\*(\*)?|/)[1-9][0-9]*)*$"
echo $1 | egrep "$reg" > /dev/null || { echo "expression error!" && exit; }
echo $(($1))
