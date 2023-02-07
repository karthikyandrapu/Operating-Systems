len=`echo $1|wc -c`
i=0
echo $len
while [ $i -lt $len ]
do 
temp=`echo $1|cut -c $len`
rev=`echo $rev$temp`
len=`expr $len - 1`
done
if [ "$1" = "$rev" ]
then 
echo palindrome
else
echo not palindrome
fi 
echo $rev

