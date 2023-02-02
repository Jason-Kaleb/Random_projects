#!/bin/bash 

name=$1 
compliment=$2 

user=$(whoami)
date=$(date)
location=$(pwd)

echo "Good Day $name"

sleep 2

echo "You looking quite good today $name"

sleep 2

echo "You have mooi $compliment"

sleep 3 

echo "Do you know that you're currently logged in as $user and that you in the directory: $location"

sleep 2 

echo "And the date is: $date"
