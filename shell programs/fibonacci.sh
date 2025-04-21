echo Enter limit
read n
echo Fibonacci series:
echo 0
echo 1
first=1
second=0
sum=0
while [ $n -ne 2 ]
do
sum=`expr $first + $second` 
second=$first
first=$sum
n=`expr $n - 1`
echo $sum
done

