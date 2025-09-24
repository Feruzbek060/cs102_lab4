#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number (1-12): ";
    cin >> number;

    switch (number) {
        case 1:
            cout << "14-yanvar, Vatan himoyachilari kuni" << endl;
        break;
        case 2:
            cout << "There is no holiday" << endl;
        break;
        case 3:
            cout << "21-mart, Navro'z" << endl;
        break;
        case 4:
            cout << "There is no holiday" << endl;
        break;
        case 5:
            cout << "There is no holiday" << endl;
        break;
        case 6:
            cout << "1-iyun, Bolalar kuni" << endl;
        break;
        case 7:
            cout << "There is no holiday" << endl;
        break;
        case 8:
            cout << "There is no holiday" << endl;
        break;
        case 9:
            cout << "1-sentabr, Mustaqillik kuni" << endl;
        break;
        case 10:
            cout << "1-oktabr, O'qituvchilar kuni" << endl;
        break;
        case 11:
            cout << "There is no holiday" << endl;
        break;
        case 12:
            cout << "31-dekabr, Yangi yil" << endl;
        break;
        default:
            cout << "Enter a valid number between 1 and 12" << endl;
    }

    return 0;
}
