# for i in 1 2 3 4 5
# do
#     echo $i
# done

# for i in {1..10}
# do
#     echo $i
# done

# for i in {1..10..2}
# do
#     echo $i
# done

# for (( i=0; i<5; i++ ))
# do
#     echo $i
# done


# for command in ls pwd date
# do
#     echo "-----------------------$command----------------------"
#     $command
# done


# * means to iterate over all the files nside the current directory
for item in *
do
    if [ -d $item ]
    then
        echo "Directory name: $item"
    elif [ -f $item ]
    then
        echo "File name: $item"
    fi
done