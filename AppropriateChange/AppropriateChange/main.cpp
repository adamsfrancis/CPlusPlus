#include <iostream>

using namespace std;

int main()
{
	//Ask the user to input a number of cents
	cout << "Please enter a number of cents: ";
	int centsInput{ 0 };
	cin >> centsInput;
	string outputString{ "Change dispensed is: " };
	int dollarsCount{ 0 };
	int quartersCount{ 0 };
	int dimesCount{ 0 };
	int nickelsCount{ 0 };
	int penniesCount{ 0 };

	while (centsInput > 0)
	{
		if (centsInput >= 100) {
			dollarsCount = (centsInput / 100); centsInput %= 100;
		}
		else if (centsInput >= 25) {
			quartersCount = centsInput / 25; centsInput %= 25;
		}
		else if (centsInput >= 10) {
			dimesCount = centsInput / 10; centsInput %= 10;
		}
		else if (centsInput >= 5) {
			nickelsCount = centsInput / 5; centsInput %= 5;
		}
		else {
			penniesCount = centsInput / 1; centsInput %= 1;
		}
	}
	cout << outputString << dollarsCount << " dollars, " << quartersCount << " quarters, " << dimesCount << " dimes, " << nickelsCount << " nickels, " << penniesCount << " pennies." << endl;

	return 0;
}