echo Enter first number:
read n1
echo Enter second number:
read n2
if [ $n1 -eq $n2 ]
then
echo Numbers are equal
elif [ $n1 -gt $n2 ]
then
echo "$n1 is greater"
else
echo "$n2 is greater"
fi
