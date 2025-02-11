
#include <iostream>
#include <cmath>

// Define the function whose root we are finding
double func(double x) {
    return x * x * x - 6 * x * x + 11 * x - 6;
}

// Bisection method
double bisection(double a, double b, double tol) {
    if (func(a) * func(b) >= 0) {
        std::cout << "The bisection method fails." << std::endl;
        return -1;
    }

    double c = a;
    while ((b - a) >= tol) {
        c = (a + b) / 2;

        // Check if the middle point is the root
        if (func(c) == 0.0) {
            break;
        }
        // Decide the side to repeat the steps
        else if (func(c) * func(a) < 0) {
            b = c;
        }
        else {
            a = c;
        }
    }
    return c;
}

int main() {
    double a = 1, b = 3, tol = 1e-5;
    double root = bisection(a, b, tol);
    std::cout << "The root is approximately: " << root << std::endl;
    return 0;
}
