: '
Label files in a directory with provided label number. Can be used 
to label files in order to provide them as input to a neural network.
'

[ $# -ne 2 ] && echo "usage: $0 <directory> <label_number>" && exit

dir=$1
label=$2

[[ -f "labels" ]] || touch $dir/labels

for file in $(ls $dir)
do
	if ! [[ $file =~ .*.sh$ || $file = "labels" ]]
	then
		echo "$file,$label" >> $dir/labels
	fi
done		