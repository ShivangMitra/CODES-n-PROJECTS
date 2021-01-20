# function name(){
#     echo "Hello"
# }

# quit () {
#     exit
# }

# function print(){
#     echo $1 $2 $3
# }

# quit () {
#     exit
# }

# print hello world again
# quit

usage () {
    echo "You need to provide an argument: "
    echo "Usage : $0 file_name"
}

is_file_exists(){
    local file="$1"
    [[ -f "$file" ]] && return 0 || return 1
}

[[ $# -eq 0 ]] && usage

if ( is_file_exists "$1" )
then
    echo "file found"
else
    echo "file not found"
fi