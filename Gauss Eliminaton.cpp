
//Gauss Elimination
#include <iostream>

using namespace std;

void gaussElimination(double a[3][4]) {
    int i, j, k;

    // Forward elimination
    for (i = 0; i < 3; i++) {
        if (a[i][i] == 0) {
            cout << "Mathematical Error! Division by zero.\n";
            return;
        }

        for (j = i + 1; j < 3; j++) {
            double ratio = a[j][i] / a[i][i];
            for (k = 0; k < 4; k++) {
                a[j][k] -= ratio * a[i][k];
            }
        }
    }

    // Back-substitution
    double x[3];
    for (i = 2; i >= 0; i--) {
        x[i] = a[i][3];
        for (j = i + 1; j < 3; j++) {
            x[i] -= a[i][j] * x[j];
        }
        x[i] /= a[i][i];
    }

    // Display solution
    cout << "Solution:\n";
    cout << "x = " << x[0] << "\n";
    cout << "y = " << x[1] << "\n";
    cout << "z = " << x[2] << "\n";
}

int main() {
    double a[3][4];  // Augmented matrix (3x4)

    cout << "Enter coefficients and constants of the system (row-wise):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    gaussElimination(a);

    return 0;
}
