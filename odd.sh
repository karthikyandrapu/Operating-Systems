echo enter number
read n
i=0
echo odd numbers between 0 and $n are
while [ $i -le $n ]
do
if [ `expr $i % 2` -ne 0 ]
 then 
 echo $i
 fi
i=`expr $i + 1`
done 
