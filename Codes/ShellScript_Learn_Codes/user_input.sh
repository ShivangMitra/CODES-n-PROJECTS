echo "Enter names"
#read name
read name1 name2 name3
#echo "Entered name: $name"
echo "Names: $name1, $name2, $name3"
#taking input on same line
read -p 'username : ' user_var
read -sp 'password : ' pass
echo
echo "username : $user_var"
echo "password : $pass"

echo "Enter names : "
read -a names
echo "Names : ${names[0]}, ${names[1]}"

echo "Enter name : "
read
echo "Name : $REPLY"
