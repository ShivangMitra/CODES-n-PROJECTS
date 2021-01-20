var=31

readonly var

var=50

echo "var => $var"

hello () {
    echo "Hello World"
}

# -f for making functions readonly
readonly -f hello

hello () {
    echo "Chintu"
}

readonly
echo "------------------------------------------"
readonly -p
echo "-----------------Functions----------------"
readonly -f
