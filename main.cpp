// Title: - Quadratic Equation Calculator -
// Programmer: Ja'Vante Brown 
// Projected Started:06/04/2025
// Description: Code will use the cmath libary to solve for x using the quad. formula 
// Formulas Used:
// Quadratic formula - x = (-b ± √(b² - 4ac)) / 2a


// Header Files 
#include <iostream>
#include <cmath>

// Simplifies code by allowing you to use standard library elements without prefixing.
using namespace std;

// Main Function
int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, and c for ax^2 + bx + c = 0:" << endl;
    cin >> a >> b >> c;

    // Check if a is zero (not a quadratic equation)
    if (a == 0) {
        cout << "This is not a quadratic equation." << endl;
        return 1;
    }

    // Primitive type that holds a double-precision floating point value
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two real and distinct roots
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (discriminant == 0) {
        // One real root
        double x = -b / (2 * a);
        cout << "Root is real and equal:" << endl;
        cout << "x = " << x << endl;
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and imaginary:" << endl;
        cout << "x1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}

