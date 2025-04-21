i=1
echo Select operation:
echo 1. Equal Strings
echo 2. Uppercase String
echo 3. Replace Substring
echo 4. Position of substring
echo 5. Exit from menu 
echo -n Enter your menu choice: 
while [ $i -ne 0 ]
do
read choice
case $choice in
1) echo Enter first string:
read str1
echo Enter second string:
read str2
if [ $str1 == $str2 ]
then
echo Equal strings
else
echo Not equal 
fi;;
2)  echo Enter first string:
read str1 
y=${str1^^}
echo $y;;
3)  echo Enter string:
read str1
echo Enter sub string:
read str2
echo Enter string to replace with:
read str3
y=${str1//$str2/$str3}
echo $y;;    
4)echo Enter string:
read str
echo Enter sub string:
read str1
pos=-1
length=${#str}
str_length=${#str1}
for (( i=0 ; i<=length-str_length; i++ ))
do
if [[ "${str:i:str_length}" == "$str1" ]]
then 
pos=1
y=$(( $i + 1 ))
echo "position" $y
fi
done
if [ $pos -eq -1 ]
then
echo substring not found
fi
;;

5) echo "Exiting"
exit;;
*) echo "invalid option";;
esac
echo Press 1 to continue or 0 to exit
read i
if [ $i -eq 0 ]
then
echo Exiting
break
else
echo "Enter your menu choice: "
fi
done
