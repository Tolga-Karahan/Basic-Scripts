: '
Change filenames of files in provided directory. Rename them
as dir1, dir2, dir3, ... so on. It is useful when we want to
label files of a directory.
'

[ $# -ne 1 ] && echo "usage: $0 <directory>"

dir=$1
(( i=1 ))

for file in $(ls $dir)
do
	if ! [[ $file =~ .*.sh$ ]]
	then
		new_name="$dir$i"
		[ -f $dir/$new_name ] && mv $dir/$file $dir/$dir$(( ++i )) || mv $dir/$file $dir/$new_name
		(( i++ ))
	fi	
done