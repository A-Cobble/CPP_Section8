#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

	/*
		+ addition
		- subtraction
		* multiplication
		/ division
		% modulo or remainder (works only with integers)

		+,-,*, and / operators are overloaded to work with multiple types such as int, double, etc.
		% only works for integer types

		++ increment operator
		-- decrement operator

		++ and -- can be used with integers, floating point types and pointers
		
		2 different varients
		Prefix ++num
		Postfix num++
		
		Never use ++ or -- twice for the same variable in the same statement
	*/

	/*int num1{ 200 };
	int num2{ 100 };

	 cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

	 int result{ 0 };

	 result = num1 + num2;
	 cout << num1 << " + " << num2 << " = " << result << endl;

	 result = num1 - num2;
	 cout << num1 << " - " << num2 << " = " << result << endl;

	 result = num1 * num2;
	 cout << num1 << " * " << num2 << " = " << result << endl;

	 result = num1 / num2;
	 cout << num1 << " / " << num2 << " = " << result << endl;

	 result = num2 / num1;
	 cout << num2 << " / " << num1 << " = " << result << endl;

	 result = num1 % num2;
	 cout << num1 << " % " << num2 << " = " << result << endl;

	 num1 = 10;
	 num2 = 3;

	 result = num1 % num2;
	 cout << num1 << " % " << num2 << " = " << result << endl;

	 result = num1 * 10 + num2;

	 cout << 5 / 10 << endl;

	 cout << 5.0 / 10.0 << endl;*/

	/*const double usd_per_euro{ 1.07 };

	cout << "Welcome to the Euro to USD converter" << endl;
	cout << "Enter the value in EUR:";

	double euros{ 0.0 };
	double dollars{ 0.0 };

	cin >> euros;
	dollars = euros * usd_per_euro;

	cout << euros << " euros is equivalent to " << dollars << " dollars." << endl;

	cout << endl;*/





	//Example 1 = simple increment
	int counter{ 10 };
	int result{ 0 };

	cout << "counter: " << counter << endl;

	counter = counter + 1;
	cout << "counter: " << counter << endl;

	counter++;
	cout << "counter: " << counter << endl;

	++counter;
	cout << "counter: " << counter << endl;

	//Example 2 = pre-increment
	counter = 10;
	result = 0;

	cout << "Counter: " << counter << endl;
	result = ++counter; // Note the pre-increment
	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;

	//Example 3 = post-increment
	counter = 10;
	result = 0;

	cout << "Counter: " << counter << endl;

	result = counter++;  // Note the post-increment
	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;

	//Example 4
	counter = 10;
	result = 0;

	cout << "Counter: " << counter << endl;

	result = ++counter + 10; // Note the pre-increment
	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;

	//Example 5
	counter = 10;
	result = 0;

	cout << "Counter: " << counter << endl;

	result = counter++ + 10; // Note the post-increment

	cout << "Counter: " << counter << endl;
	cout << "Result: " << result << endl;

	cout << endl;

	return 0;
}