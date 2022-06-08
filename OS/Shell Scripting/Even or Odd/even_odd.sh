echo "Enter the number"
read n
if [ `expr $n % 2` == 0 ]
then
	echo "$n is even number "
else
	echo "$n is odd number"
fi
