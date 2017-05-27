#!/bin/bash
#4.5.sh
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
