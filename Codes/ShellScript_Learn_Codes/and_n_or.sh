age=60

# --------------AND--------------

# if [ "$age" -gt 18 ] && [ "$age" -lt 30 ]
# then
#     echo "valid age"
# else
#     echo "age not valid"
# fi

# if [ "$age" -gt 18 -a "$age" -lt 30 ]
# then
#     echo "valid age"
# else
#     echo "age not valid"
# fi

# if [[ $age -gt 18 && $age -lt 30 ]]
# then
#     echo "valid age"
# else
#     echo "age not valid"
# fi



# ---------------OR---------------

# if [ "$age" -gt 18 ] || [ "$age" -lt 30 ]
# then
#     echo "valid age"
# else
#     echo "age not valid"
# fi

# if [ "$age" -gt 18 -o "$age" -lt 30 ]
# then
#     echo "valid age"
# else
#     echo "age not valid"
# fi

if [[ $age -gt 18 || $age -lt 30 ]]
then
    echo "valid age"
else
    echo "age not valid"
fi