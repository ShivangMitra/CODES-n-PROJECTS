os=('ubuntu' 'windows' 'kali')
os[6]="mac"

unset os[2]

echo "${os[@]}"
echo "${os[0]}"
echo "${!os[@]}"
echo "${#os[@]}"

# any variable can be treated as an array just that the val of that variable will be stored at the 0th position
str=uhefuhwoeuf
echo "${str[@]}"
echo "${str[0]}"
echo "${str[1]}"
echo "${#str[@]}"