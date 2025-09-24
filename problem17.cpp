#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;


    int type = (number > 0) ? 1 : (number < 0 ? -1 : 0);

    switch (type) {
        case 1:
            cout << "The number is positive." << endl;
            break;
        case -1:
            cout << "The number is negative." << endl;
            break;
        case 0:
            cout << "The number is zero." << endl;
            break;
    }

    return 0;
}
