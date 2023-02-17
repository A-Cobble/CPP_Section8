#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

	/*
	C++ will attempt to automatically convert types ( also known as coercion ) 
		Conversions: Higher vs Lower types are based on the size of the values the type can hold
			-long double, double, float, unsigned long, long, unsigned int, int
			-short and char types are always converted to int
		Type Coercion: conversion of one operand to another data type
		Promotion: conversion to a higher type
			-Used in mathematical expressions
		Demotion: conversion to a lower type
			-Used with assignment to lower type

	Examples:
		lower to higher  ... the lower is promoted to a higher
		2 * 5.2
		the lower ( 2 ) will be promoted to 2.0 

		lower = higher;  ... the higher is demoted to a lower
		int num { 0 };
		num = 100.2;
		100.2 will be demoted to 100 therefore inserting a loss of percision 
	*/




	/*
	Ask the user to enter 3 integers
	Calculate the sum of the integers then calculate the average of the 3 integers.

	Display the 3 integers entered
	the sum of the 3 integers and 
	the average of the 3 integers.
	*/

	int total{};
	int num1{}, num2{}, num3{};
	const int count{ 3 };

	cout << "Please enter 3 integers separated by spaces." << endl;
	cin >> num1 >> num2 >> num3;

	total = num1 + num2 + num3;

	double average{ 0.0 };
	average = static_cast<double> (total) / count; // note the static_cast. This checks to see if total can be converted into a double then does the conversion

	cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
	cout << "The sum of the numbers is: " << total << endl;
	cout << "The average of the number is: " << average << endl;
	

	cout << endl;

	return 0;
}