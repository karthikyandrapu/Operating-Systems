echo Enter n value
read n
i=1
echo prime numbers between 1 and $n:
while [ $i -lt $n ]
do
 c=0
 j=2
 while [ $j -le $i ]
 do
 ex=`expr $i % $j`
 if [ $ex -eq 0 ]
 then 
  c=`expr $c + 1`
 fi
 j=`expr $j + 1`
 done
if [ $c -eq 1 ]
then 
 echo $i
fi
i=`expr $i + 1`
done 
  
