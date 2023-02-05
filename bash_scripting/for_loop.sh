#!/bin/bash

x=2000 

while [[ $x -le 2011 ]]
do

   for trophies in {1..12};
   do 
      echo "You have acquired $trophies trophy/trophies in year: $x"
      (( x ++ ))
   done

done 

echo "Congratulations on Acquiring so many trophies in these years!!!"
