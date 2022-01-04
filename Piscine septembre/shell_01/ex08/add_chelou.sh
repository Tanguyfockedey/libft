#!/bin/sh
#x1=$(echo $FT_NBR1 | tr "'\\\\\"?!" "01234")
#x2=$(echo $FT_NBR2 | tr "mrdoc" "01234")
#x1=$(echo "ibase=5; $x1" | bc)
#x2=$(echo "ibase=5; $x2" | bc)
#x3=$(echo $x1 + $x2 | bc)
#x3=$(echo "obase=13; $x3" | bc) 
#echo $x3 | tr "0123456789ABC" "gtaio luSnemf"
echo $FT_NBR1 + $FT_NBR2 | tr "\'\\\\\"\?\!" '01234' | tr 'mrdoc' '01234' | xargs -I{} echo 'ibase=5; obase=13; {}' | bc | tr '0123456789ABC' 'gtaio luSnemf'