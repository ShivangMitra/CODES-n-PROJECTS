num1=20.5
num2=5

# echo $((num1 + num2))
# echo $((num1 - num2))
# echo $((num1 * num2))
# echo $((num1 / num2))
# echo $((num1 % num2))

# echo $(expr $num1 + $num2)
# echo $(expr $num1 - $num2)
# echo $(expr $num1 \* $num2)
# echo $(expr $num1 / $num2)
# echo $(expr $num1 % $num2)



# FLOATING POINT ARETHMETIC

# echo "20.5+5" | bc
# echo "20.5-5" | bc
# echo "20.5*5" | bc
# echo "scale=2;20.5/5" | bc
# echo "20.5%5" | bc

echo "$num1+$num2" | bc
echo "$num1-$num2" | bc
echo "$num1*$num2" | bc
echo "scale=2;$num1/$num2" | bc
echo "$num1%$num2" | bc

num=27

echo "scale=2;sqrt($num)" | bc -l
# -l to use the math lib of bc

echo "scale=2;3^3" | bc -l