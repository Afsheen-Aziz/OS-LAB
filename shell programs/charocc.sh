echo Enter string:
read str
echo Enter character:
read char
length=${#str}
count=0
for (( i=0 ; i < length ; i++ ))
do
if [ ${str:$i:1} = $char ]
then
count=$(($count + 1))
fi
done
echo Occurence of $char in $str is $count
