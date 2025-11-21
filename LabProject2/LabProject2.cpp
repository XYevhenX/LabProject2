#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>
#include <format>

using namespace std;

void greeting() {
	/*
	* Prints the author's name and the program's purpose.
	*/
	cout << "The author of this program is Ziuzin Yevhen.\n";
	cout << "This program calculates the expression from variant by given x. Variant 105.\n";
}
double input() {
	/*
	* Prompts the user to enter a double value for 'x'.
	* Throws invalid_argument if the input stream fails.
	* Returns the double value entered by the user.
	*/
	double x;
	cout << "Please, enter x from domain (): ";
	cin >> x;
	if (cin.fail()) {
		throw runtime_error("wrong input");
	}
	cout << endl;
	return x;
}
int main()
{
    try
    {
        
    }
	catch (exception& e) {
		cout << e.what() << endl;
	}
	return 0;
}