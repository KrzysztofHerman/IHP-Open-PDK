#!/bin/bash
#
directory="$PDK_ROOT/libs.tech/xschem/sg13g2_tests/simulation"
rm -rf $directory/*.spice
for file in $PDK_ROOT/libs.tech/xschem/sg13g2_tests/*.sch 
do  
  xschem -sxq -n $file
  basefile=$(basename "$file")
  filenamespice=${basefile%.*}
  extension=".spice"
  filename="$filenamespice$extension" 
  if [ -e "$directory/$filename" ]; then
    echo "Passed"
  else
    echo "Failed"
  fi
done
