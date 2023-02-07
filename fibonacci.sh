echo enter n
read n
i=0
a=0
b=1
echo $a
echo $b
n=`expr $n - 2`
while [ $i -lt $n ]
do
c=`expr $a + $b`
a=$b
b=$c
echo $c
i=`expr $i + 1`
done


