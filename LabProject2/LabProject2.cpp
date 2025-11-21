#include <iostream>
#include <cmath>
#include <format>

using namespace std;

const double a = 0.0, b = 0.8;

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
bool is_in_domain(double x) {
	/*
	* Checks if the given 'x' value is within the expression's domain.
	*/
	return ;
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