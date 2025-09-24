#include <iostream>
using namespace std;

int main() {
    int weight;
    cout << "Enter the weight: "<<endl;
    cin >> weight;

    if (weight < 0) {
        cout << "invalid input" << endl;
        return 0;
    }

    int package;
    if (weight > 0 && weight <= 1) package = 1;
    else if (weight > 1 && weight <= 3) package = 2;
    else if (weight > 3 && weight <= 10) package = 3;
    else if (weight > 10 && weight <= 20) package = 4;
    else package = 5;

    switch (package) {
        case 1:
            cout << "Cost is 3500 sum" << endl;
        break;
        case 2:
            cout << "Cost is 5500 sum" << endl;
        break;
        case 3:
            cout << "Cost is 8500 sum" << endl;
        break;
        case 4:
            cout << "Cost is 10500 sum" << endl;
        break;
        default:
            cout << "the package cannot be shipped" << endl;
    }

    return 0;
}
