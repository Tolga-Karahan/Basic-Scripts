# Calisma dizininde bulunan dosyalari 01,02,... seklinde
# isimlendirerek arguman olarak alinan dizine tasir
# Eski ve yeni isimleri bir dosyada tutar

[[ -e $1 ]] || mkdir $1
i=0

for file in `ls $PWD`
do
	mv $file $1/"0$i"
	echo "<0$i>:<$file>" >> names
	((i++))
done




 

