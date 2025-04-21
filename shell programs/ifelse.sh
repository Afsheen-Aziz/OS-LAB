echo Enter a number:
read x
echo Enter a number:
read y
if [ `expr $x -eq $y` ]
then
echo it is equal
else
echo it is not equal
fi
