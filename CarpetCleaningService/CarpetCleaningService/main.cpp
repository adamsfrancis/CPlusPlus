/*
Goals:

-Prompt the user to enter a number of rooms
-Multiply the number of rooms by the $30 per room charge
-Calculate tax at 6%
-Display the total estimate
-Display valid for: day of quote plus 30 days
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double smallRoomPrice{ 25.0 };
	double largeRoomPrice{ 35.0 };
	double taxRate{ 0.06 };
	int numberOfSmallRooms{ 0 };
	int numberOfLargeRooms{ 0 };

	cout << "Hello, welcome to the carpet cleaning service!" << endl;
	cout << "Please enter the number of small rooms to be cleaned: ";
	cin >> numberOfSmallRooms;
	cout << "Please enter the number of large rooms to be cleaned: ";
	cin >> numberOfLargeRooms;

	double subTotal{ (smallRoomPrice * numberOfSmallRooms) + (largeRoomPrice * numberOfLargeRooms) };
	double totalTax{ subTotal * taxRate };
	double totalPrice{ subTotal + totalTax };

	cout.precision(2);

	system("CLS");

	cout << "Carpet cleaning quote:" << endl;
	cout << "-----------------------------" << "\n\n" << endl;
	cout << "Small rooms to clean: " << "\t" << numberOfSmallRooms << "@ " << smallRoomPrice << "/room" << endl;
	cout << "Large rooms to clean: " << "\t" << numberOfLargeRooms << "@ " << largeRoomPrice << "/room" << endl;
	cout << fixed << "Subtotal: " << "\t\t$" << subTotal << endl;
	cout << fixed << "Total tax: " << "\t\t$" << totalTax << endl;
	cout << "-----------------------------" << "\n\n" << endl;
	cout << fixed << "Total price: " << "\t\t$" << totalPrice << endl;
	cout << "This quote is valid for 30 days." << endl;

	return 0;
}