n=1

# while [ $n -le 10 ]
while (( $n <= 10 ))
do
    echo "$n"
    # n=$(( n+1 ))
    (( n++ ))
    # gnome-terminal &       I dont have a gnome terminal working on WSL
    # xterm &                I dont have a xterm terminal working on WSL
    # sleep 1
done