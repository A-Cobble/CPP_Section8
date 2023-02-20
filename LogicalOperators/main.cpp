#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;

int main() {

	//Short-Circuit Evaluation
		//When evaluating a logical expression C++ stops as soon as the result is known
		//Example: expr01 || expr2 || expre3   if expr2 is true then it will stop there because it knows that it only needed expression to be true to evaluate to true


	int num{};
	const int lower{ 10 };
	const int upper{ 20 };

	cout << boolalpha;

	//Determine if an entered integer is between two other integers
	//assume lower < upper
	cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
	cin >> num;

	bool withinBounds{ false };

	withinBounds = (num > lower && num < upper);
	cout << num << " is between " << lower << " and " << upper << ": " << withinBounds << endl;

	//Determine if an entered integer is outside two other integers
	//assume lower < upper
	cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << ": ";
	cin >> num;

	bool outsideBounds{ false };
	outsideBounds = (num < lower || num > upper);
	cout << num << "is outside " << lower << " and " << upper << ": " << outsideBounds << endl;

	//Determine if an entered integer is exactly on the boundary
	//assume lower < upper
	cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << ": ";
	cin >> num;

	return 0;
}