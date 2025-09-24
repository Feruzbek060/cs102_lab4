#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Please enter your grade: ";
    cin >> grade;

    if (grade >= 0 && grade <= 59) {
        cout << "Your grade is F" << endl;
    } else if (grade >= 60 && grade <= 69) {
        cout << "Your grade is E" << endl;
    } else if (grade >= 70 && grade <= 79) {
        cout << "Your grade is D" << endl;
    } else if (grade >= 80 && grade <= 89) {
        cout << "Your grade is B" << endl;
    } else if (grade >= 90 && grade <= 100) {
        cout << "Your grade is A" << endl;
    } else {
        cout << "Not in the list (invalid grade)" << endl;
    }

    return 0;
}
