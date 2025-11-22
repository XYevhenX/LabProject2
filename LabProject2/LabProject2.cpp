#include <iostream>
#include <cmath>
#include <format>
#include <limits>
#include <stdexcept>

using namespace std;

const double a = 0.0, b = 0.8;

void greeting() {
    /*
    * Prints the author's name and the program's purpose.
    */
    cout << "The author of this program is Ziuzin Yevhen.\n";
    cout << "This program calculates the expression from variant by given x. Variant 105.\n";
}

void input(double& x, const string& prompt, const string& name) {
    /*
    * Prompts the user to enter a double value for 'x'.
    * Throws runtime_error if the input stream fails.
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

double f(double x, double eps) {
    double sum = 0;
    double term;
    int n = 0;
    double x_pow = x;

    term = x_pow / ((n + 1.0) * (2.0 * n + 1.0));

    while (abs(term) >= eps) {
        sum += term;
        n++;
        x_pow *= x;
        term = x_pow / ((n + 1.0) * (2.0 * n + 1.0));
    }

    return sum += term;
}

int main() {
    try {
        greeting();

        double x, eps;

        input(x, format("Enter a real from [{:.1f};{:.1f}]: ", a, b), "x");

        if (x < a || x > b)
            throw runtime_error("At time of getting x: incorrect value");
        cout << endl;

        input(eps, "Enter positive eps: ", "eps");
        if (eps <= 0)
            throw runtime_error("At time of getting eps: incorrect value");
        cout << endl;

        cout << "***** do calculations ... ";
        double result = f(x, eps);
        cout << " done" << endl;

        cout << format("for x = {:.5f}", x) << endl;
        cout << format("for eps = {:.8f}", eps) << endl;
        cout << format("result = {:.9f}", result) << endl;

    }
    catch (exception& e) {
        cout << "\nError: " << e.what() << endl;
    }
    return 0;
}