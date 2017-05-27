#!/bin/bash
#4.4.sh
i=$[  $1 % 2 ]
echo $i
if  test  $i -eq 0 ;then
	 echo oushu
else
	echo jishu
fi
