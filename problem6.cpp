#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, and c (can be decimals): ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation because 'a' cannot be zero." << endl;
        return 0;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The equation has two real roots: " << root1 << " and " << root2 << endl;
    }
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "The equation has one real root: " << root << endl;
    }
    else {
        cout << "The equation has no real roots." << endl;
    }

    return 0;
}
