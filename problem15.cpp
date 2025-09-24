#include <iostream>
using namespace std;

int main() {
    int today, daysAfter, futureDay;

    cout << "Enter today's day (Sunday=0, Monday=1, ..., Saturday=6): ";
    cin >> today;

    cout << "Enter the number of days after today: ";
    cin >> daysAfter;

    // Calculate the future day
    futureDay = (today + daysAfter) % 7;

    // Display weekday name
    cout << "Today is ";
    switch (today) {
        case 0: cout << "Sunday"; break;
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
    }

    cout << " and the future day is ";

    switch (futureDay) {
        case 0: cout << "Sunday"; break;
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
    }

    cout << "." << endl;

    return 0;
}
