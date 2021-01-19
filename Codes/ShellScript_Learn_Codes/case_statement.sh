# vehicle=$1

# case $vehicle in
#     "car" )
#         echo "Rent of $vehicle is \$100" ;;
#     "van" )
#         echo "Rent of $vehicle is \$80" ;;
#     "bicycle" )
#         echo "Rent of $vehicle is \$5" ;;
#     "truck" )
#         echo "Rent of $vehicle is \$150" ;;
#     * )
#         echo "Unknown vehicle" ;;
# esac

echo -e "Enter a character : \c"
read ch

case $ch in
    [a-z] )
        echo "User entered $ch a to z" ;;
    [A-Z] )
        echo "User entered $ch A to Z" ;;
    [0-9] )
        echo "User entered $ch 0 to 9" ;;
    ? )
        echo "User entered $ch special character" ;;
    * )
        echo "Unknown Input" ;;
esac
# ? takes any character but should be a single character