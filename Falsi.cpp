
// Regular falsi
#include <iostream>
#include <cmath>
using namespace std;

// Function to define the equation
double f(double x) {
    return 2* exp(x)* sin(x) - 3; // Example: 2*e^x * sinx -3
}

int main() {
    double a, b, c, tolerance;

    // Input: Interval [a, b] and Tolerance
    cout << "Enter the interval [a, b]: ";
    cin >> a >> b;
    cout << "Enter the desired tolerance: ";
    cin >> tolerance;

    // Check if a valid interval
    if (f(a) * f(b) >= 0) {
        cout << "Invalid interval. f(a) and f(b) must have opposite signs.\n";
        return 1;
    }

    // Regula Falsi Method Iteration
    do {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a)); // False position formula
        if (f(c) == 0) break; // Found exact root
        if (f(a) * f(c) < 0) b = c; // Root lies in [a, c]
        else a = c; // Root lies in [c, b]
    } while (fabs(f(c)) > tolerance); // Stop when f(c) is within tolerance

    // Output: Root
    cout << "The root is approximately: " << c << endl;

    return 0;
}
