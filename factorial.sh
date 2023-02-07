echo enter number
read n
echo $n factorial is:
i=$n
fact=1
while [ $i -gt 0 ]
do
fact=`expr $fact \* $i`
i=`expr $i - 1`
done
echo $fact

