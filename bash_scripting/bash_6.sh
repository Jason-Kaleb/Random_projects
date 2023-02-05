#!/bin/bash 

echo "This is a Lap Counter. For Each Lap You Complete, Press Enter."

sleep 2 

echo "Number of Laps Required: 10"

x=1

while [[ $x -le 10 ]]
do 
  read -p "Lap Number: $x"
  (( x ++ ))
done
sleep 1 

echo "Congrats,You Have Completed Your Round Of laps!!"

