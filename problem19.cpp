#include <iostream>


using namespace std;
int main() {
    int weight;
    cout << "Enter the weight: ";
    cin >> weight;
    if (weight > 0 && weight <= 1) {
        cout << "Cost is 3500 sum" << endl;
    } else if (weight > 1 && weight <= 3) {
        cout << "Cost is 5500 sum" << endl;
    } else if (weight > 3 && weight <= 10) {
        cout << "Cost is 8500 sum" << endl;
    } else if (weight > 10 && weight <= 20) {
        cout << "Cost is 10500 sum" << endl;
    } else if (weight < 0) {
        cout << "invalid input" << endl;
    } else {
        cout << "the package cannot be shipped" << endl;
    }
    return 0;
}

