#!/bin/bash

echo "You died!"

sleep 3 

echo "What is your Game Username?"

read username

echo "Welcome $username :). Please select your class:
1- Superman
2- Flash
3- Ironman
4- John_Wick
5- Thor
6- Hulk"

read class 

case $class in 
	1) 
		type="Superman"
		hp=100
		attack=50
		power="Laser eyes And Flight"
		;;
	2)	type="Flash"
		hp=100
		attack=25
		power="Speed Of Light"
		;;
	3)	type="Ironman"
		hp=100
		attack=50
		power="Iron Man Suit"
		;;
	4)	type="John_Wick"
		hp=100
		attack=40
		power="Assassin"
		;;
	5)	type="Thor"
		hp=100
		attack=50
		power="God of thunder"
		;;
	6)	type="Hulk"
		hp=100
		attack=50
		power="Super Strength"
		;;
esac

echo "  You chose $type
	Your Hp is: $hp
	Your attack is: $attack
	Your Power: $power"

#The Battle against Beasts begins

beast=$(( $RANDOM % 2 ))

echo "Your first battle approaches. Prepare to battle. Pick a number between 0 and 1"

read tarnished 

addHp=$(( ($RANDOM % 101) + $hp ))

if [[ $beast == $tarnished ]]; then 

	echo "You face the beast head on!!"

	sleep 2

	echo "You blast the beast with a special attack"

	sleep 2 

	echo "The beast is weak,You finish the beast with a blast to the head...You Win!!"
	
	sleep 4

	echo "Your reward: HP is now: $addHp"

else 
	echo "The Beast comes up with a powerful move against you leaving you weak"

	sleep 2 

	echo "You weak on your knees And the Beast finishes you off by eating your Head."
	sleep 1

	echo "You Lose!!!"
	exit 1
fi

sleep 3

echo "Well done on reaching this stage!!"

sleep 2 

echo "Second Battle now awaits you. Beast = Madara. Choose a number between 0-3"

read tarnished 

beast=$(( $RANDOM % 4 ))
addA=$(( ( $RANDOM % 51) + $attack ))

if [[ $beast == $tarnished || $tarnished == "jason" ]]; then 

	echo "Your battle begins with the beast blasting you with a low blow.."

	sleep 2 

	echo "But it's not over yet as you strike 3x harder"

	sleep 2 

	echo "The beast tries to attack you but you dodge the attack and finish the beast with a special attack!"

	sleep 1

	echo "You Win Level 2 and Onto the final level!!"

	sleep 3 

	echo "Your reward: Attack now: $addA"

else 

	echo "Your battle begins with you striking the beast with a low blow.."

	sleep 2 

	echo "The Beast does not move an inch with that attack"

	sleep 2

	echo "The Beast performs a special attack in which he finishes you and kills you"

	sleep 1 

	echo "You Lose!Please Try Again"

	exit 1 
fi

sleep 2 

echo "You've made it to the final level: Boss Level Abomination!!!"

sleep 2 

echo "Boss Battle,Get started. It's Amari The Conquerer!!. Pick a number between 0-9"

read tarnished 

beast=$(( $RANDOM % 10 ))

if [[ $beast == $tarnished || $tarnished == "lermique" ]]; then 

	echo "Now the battle begins as you face off with Amari"

	sleep 2 

	echo "Both of you go head on and blast each other but the attack cancels each other out pushing both of yourl to the opposite sides of the arena!"

	sleep 2 

	echo "You try your new attack power to the max by blasting Amari with a special full on attack"

	sleep 2 

	echo "Amari is now weak leaving you the opportunity to finish him off"

	sleep 2 
	
	echo "You try to finish Amari off but NO....He blocks and strikes you!!"

	sleep 2 

	echo "You on your knees as he approaches to kill you"

	sleep 2 

	echo "He tries to kill you but in your head you believe its not over yet and than.... YOU DODGE THE ATTACK and upon doing that YOU UNLEASH an UPPER CUT finsihing the boss"

	sleep 1 

	echo "Congratulations On Passing All Levels, YOU WIN THE GAME!!"

else 
	echo "Coming from the previous level,The beast made you weak"

	sleep 2

	echo "The Boss strikes you to your knees and Kills you"

	sleep 1 

	echo "It's Over,You lose!Please try again"
fi



