#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

	//For this program I will be using US dollars and cents.

	/*
		Write a program that asks the user to enter the following:
		An integer representing the number of cents

		You may assume that the number of cents entered is greater than or equal to zero

		The program should then display how to provide that change to the user.

		In the US:
			1 dollar is 100 cents
			1 quarter is 25 cents
			1 dime is 10 cents
			1 nickel is 5 cents, and
			1 penny is 1 cent
	*/

	cout << "Welcome to the money exchange calculator extrodinare. Please enter an Integer and I will convert it into USD: ";
	int number{ 0 };
	cin >> number;

	int change = number;
	int dollar{ 0 };
	int quarter{ 0 };
	int dime{ 0 };
	int nickel{ 0 };
	int penny{ 0 };

	while (change > 0) {
		if ((change - 100) >= 0) {
			change -= 100;
			dollar++;
		}
		else if ((change - 25) >= 0) {
			change -= 25;
			quarter++;
		}
		else if ((change - 10) >= 0) {
			change -= 10;
			dime++;
		}
		else if ((change - 5) >= 0) {
			change -= 5;
			nickel++;
		}
		else if ((change - 1) >= 0) {
			change -= 1;
			penny++;
		}
	}

	cout << "You entered " << number << ". That is " << dollar << " dollars, " << quarter << " quarters, " << dime << " dimes, " << nickel << " nickels, and " << penny << " pennies. Have a great day!" << endl;


	cout << endl;

	return 0;
}