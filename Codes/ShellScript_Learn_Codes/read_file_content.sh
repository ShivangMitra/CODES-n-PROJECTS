# while read f
# do
#     echo $f
# done < read_file_content.sh
# done < text.txt

# cat read_file_content.sh | while read f
# do
#     echo $f
# done

# internal field separator
# -r prevents the \ escapes from being interpreted
# while IFS=' ' read -r line
while IFS= read -r line
do
    echo $line
done < read_file_content.sh
# you can write file paths also
