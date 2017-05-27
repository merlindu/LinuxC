#!/bin/bash
#4.6.sh
if test -z $1
then echo 'please input a file name'
else

if test  -w $1 
then echo "writeable"
else
echo "unwriteable"
fi 
if test -x $1   
then echo "excuteable"
else
echo "unexcuteable"
fi
fi
