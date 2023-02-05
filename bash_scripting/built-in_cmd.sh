#!/bin/bash

echo "We back at it"

sleep 3

echo "What is your name?"

read name 

echo "That's a cool name $name, Mind telling me your age?"

read age 

echo "So your name is: $name and You are $age years old."

sleep 3 

echo "I am going to tell you now by what age you'll be a millionaire!!"

sleep 1

echo "Calculating"
echo ".............."
sleep 1 
echo "**............"
sleep 1 
echo "****.........."
sleep 1 
echo "******........"
sleep 1 
echo "********......"
sleep 1 
echo "**********...."
sleep 1 
echo "************.."
sleep 1 
echo "**************"
sleep 1
echo " "

getrich=$(( ($RANDOM % 13) + $age ))

echo "$name, You will be a millionaire when you are $getrich years old!!!"

