echo Enter first number:
read n1
echo Enter second number:
read n2
echo Enter third number:
read n3
if [ $n1 -eq $n2 ] && [ $n2 -eq $n3 ] && [ $n3 -eq $n1 ]
then
echo Numbers are equal
elif [ $n1 -gt $n2 ] && [ $n1 -gt $n3 ]
then 
echo "$n1 is greatest"
elif [ $n2 -gt $n1 ] && [ $n2 -gt $n3 ]
then
echo "$n2 is greatest"
else
echo "$n3 is greatest"
fi
