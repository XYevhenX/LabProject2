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
void input(double& x, const string & prompt, const string & name) {
	/*
	* Prompts the user to enter a double value for 'x'.
	* Throws invalid_argument if the input stream fails.
	* Returns the double value entered by the user.
	*/
	cout << prompt;
	cin >> x;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		throw runtime_error(format("At time of getting {}: non-numeric value", name));
	}
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
		double x, eps;
		input(x, format("Enter a real from [{};{}]: ", a, b), "x");

    }
	catch (exception& e) {
		cout << e.what() << endl;
	}
	return 0;
}