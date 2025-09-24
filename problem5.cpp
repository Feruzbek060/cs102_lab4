#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Please enter a year: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << "Yes, " << year << " is a leap year." << endl;
    } else {
        cout << "No, " << year << " is not a leap year." << endl;
    }

    return 0;
}
