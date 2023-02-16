#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

	int num1{ 10 };
	int num2{ 20 }; //initiallization statement

	//num1 = 100; // assignment statement
	num1 = num2;
	//num1 = num2 = 1000; // evaluates right to left
	//num1 = "Frank"; // compiler checks and realizes there is an error

	cout << "num1 is " << num1 << endl;
	cout << "num2 is " << num2 << endl;

	return 0;
}