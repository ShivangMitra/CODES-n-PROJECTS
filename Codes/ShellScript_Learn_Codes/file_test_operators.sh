echo -e "Enter the name of the file : \c"
# \c is used to keep the cursor on the same line
# -e is used to interprit the \c "enable the enterpritation"
read file_name

# -e to check whether the file exists or not
# if [ -e $file_name ]
# then
# 	echo "$file_name found"
# else
# 	echo "$file_name not found"
# fi

# -f is to check whether the file exists or not and of the file is a regular file or not
# if [ -f $file_name ]
# then
# 	echo "$file_name found"
# else
# 	echo "$file_name not found"
# fi

# -d to check for directories
if [ -d $file_name ]
then
	echo "$file_name found"
else
	echo "$file_name not found"
fi

# -b for block special file, i.e. binary files, image files, video files, etc.
# -c for character special file, the ones which have written content
# -s for checking if the file is empty or not
# -r to check if the file has read permission
# -w to check if the file has write permission
# -x to check if the file has execute permission