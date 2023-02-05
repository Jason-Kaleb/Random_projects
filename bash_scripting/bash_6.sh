#!/bin/bash 

x=1

while [[ $x -le 10 ]]
do 
  read -p "Push-Up Number: $x"
  (( x ++ ))
done
sleep 1 

echo "Congrats,You Have Completed Your Push-Ups!!"

