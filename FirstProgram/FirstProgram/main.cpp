#include <iostream>

int main()
{
	//declare integer favorite number to hold user input value
	int favoriteNumber;

	//prompt the user to input a number
	std::cout << "Enter your favorite number between 1 and 100: ";

	//take input from the user and store it to the favoriteNumber variable
	std::cin >> favoriteNumber;

	std::cout << "Amazing, That's my favorite number too!" << std::endl;
	std::cout << "No really!! " << favoriteNumber << " is my favorite number too!!" << std::endl;
}