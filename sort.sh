if [ ! -f $1 ]
then 
echo "error: file not found"
exit 1
fi
sort $1
echo "file sorted successfully"
