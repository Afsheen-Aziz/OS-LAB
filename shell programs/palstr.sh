echo Enter a string:
read str
rev=""
length=${#str}
for (( i=length ; i >= 0 ; i-- ))
do
rev=$rev${str:$i:1}
done
if [ $rev == $str ]
then
echo "Palindrome"
else
echo "Not palindrome"
fi
