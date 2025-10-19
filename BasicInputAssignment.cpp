/*
Name: Raymond Bawal III
Date: October 17, 2025
Section: ITCS 2530 C++
BasicInputAssignment.cpp

A program that does the following:
1. Prompts user for the peices of information.
   - Use COUT to display prompt and CIN to collect input from user.
   - After collection display a short paragraph summarizing the information collected.
2. No Functions, Loops, or Conditonals
3. Crerativity and variable use:
   - Make program fun and personal.
	- Varibales need to do some sort of calculation related to hobby. 
4. Code Style:
   - Use clear variable names.
   - Use 3 comments to explain code.



*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
	//Constructors for the input variables.
	string videoGame;
	string gamingPlatform;
	string favoriteCharacter;
	int age;
	const int childAge = 7; //Constant variable for age calculation my age when I started playing pokemon.
	int ageDifference; //Variable to hold the difference in age between user and me.

	cout << "Enter the name of your favorite video game and your favorite character.\n"
		<< "Please separate response by spaces,\n"
		<< "and if answer has spaces use hypens or underscores for multiple words.\n"
		<< "Example : Super_Mario or Super-Mario.\n" << endl;// Needed because of multiple word games wont show without getLine not until page 156
		

	cin >> videoGame   >> favoriteCharacter; //Collects the name of the video game and favorite character.
	// \n used to space the input prompts for better readability.
	cout << "\nEnter the gaming platform you use to play and your age you started playing that game. \n"
		<< "Please separate response by spaces use hypens or underscore for multiple words.\n"
		<< "Example : Super_Nintendo or Super-Nintendo.\n" << endl;
		

	cin >> gamingPlatform >> age; //Collects the gaming platform and age of user.
	//Displays a summary of the information collected.

	ageDifference = age - childAge; //Calculates the difference in age between user and me when I started playing pokemon.


	cout << "\nYou were " << age << " Years old and loved to play the game " << videoGame
		<< " on the game system " << gamingPlatform << ".\n"
		<< "Your favorite character from that game is " << favoriteCharacter << ".\n"
		<< "The difference of age when we found our favorite game is " << ageDifference
		<< " years ! \n" << endl;// May come up negative no if and else statement to handle it.


		// Displays my favorite game of all time with a calculation of my age when I started playing the game and the paragraph required.
	cout << "My name is Raymond and my favorite game of all time is Pokemon Red, more for the nostalgia factor.\n"
		<< "My favorite character was Charizard, but I loved Gyarados as well.\n"
		<< "I used to play it on my Gameboy Color when I was the age of " << childAge << " years old!\n"
		<< "I remember one of the first times using dial-up internet to find this cheat!\n"
		<< "There was the rare candy cheat where you could level up your Pokemon instantly!\n"
		<< "To get the rare candies you would have to encounter the glitch Pokemon Missingno.\n"
		<< "Which would appear on the right side of the screen when you surfed along the shore of Cinnabar Island.\n"
		<< "It would duplicate the item in the 6th slot of your inventory!\n"
		<< "What fun times it was!\n" << endl;
		
	return 0;	


}
