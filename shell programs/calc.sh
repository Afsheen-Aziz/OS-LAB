echo Enter first number:
read a
echo Enter second number:
read b
echo Select operation:
echo 1. Addition
echo 2. Subtraction
echo 3. Multiplication
echo 4. Division
echo 5. Exit from menu 
echo -n Enter your menu choice: 
while :
do
read choice
case $choice in
1) c=`expr $a + $b` 
echo $c;;
2)  c=`expr $a - $b` 
echo $c;;
3)  c=`expr $a \* $b`
echo $c;;    
4)  c=`expr $a / $b` 
echo $c;;
5) echo "Exiting"
exit;;
*) echo "invalid option";;
esac
echo -n "Enter your menu choice: "
done




























