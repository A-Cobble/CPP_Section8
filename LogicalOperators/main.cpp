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
	/*cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
	cin >> num;*/

	/*bool withinBounds{ false };

	withinBounds = (num > lower && num < upper);
	cout << num << " is between " << lower << " and " << upper << ": " << withinBounds << endl;*/

	//Determine if an entered integer is outside two other integers
	//assume lower < upper
	/*cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << ": ";
	cin >> num;
	 
	bool outsideBounds{ false };
	outsideBounds = (num < lower || num > upper);
	cout << num << " is outside " << lower << " and " << upper << ": " << outsideBounds << endl;*/

	//Determine if an entered integer is exactly on the boundary
	//assume lower < upper
	/*cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << ": ";
	cin >> num;

	bool onBounds{ false };
	onBounds = (num == lower || num == upper);
	cout << num << " is on one of the bounds which are " << lower << " and " << upper << ": " << onBounds << endl;*/

	//Determine if you need to wear a coat based on temperature and wind speed
	bool wearCoat{ false };
	double temperature{};
	int windSpeed{};

	const int windSpeedForCoat{ 25 }; // wind over this value requires a coat
	const double temperatureForCoat{ 45 }; // temperature below this value requires a coat 


	//Require a coat if either wind is too high OR temperature is too low
	cout << "\nEnter the current temperature in (F): ";
	cin >> temperature;
	cout << "Enter windspeed in (mph): ";
	cin >> windSpeed;

	wearCoat = (temperature < temperatureForCoat || windSpeed > windSpeedForCoat);
	cout << "Do you need to wear a coat using OR? " << wearCoat << endl;

	//Require a coat if BOTH the windspeed is too high AND temperature is too low
	wearCoat = (temperature < temperatureForCoat&& windSpeed > windSpeedForCoat);
	cout << "Do you need to wear a coat using AND? " << wearCoat << endl;

	cout << endl;
	return 0;
}