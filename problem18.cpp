#include <iostream>
using namespace std;
int main() {
    char greeting;
    cout<<"choose one of these <u, e, r, g>";
    cin>>greeting;
    if (greeting=='u') {
        cout<<"Salom"<<endl;
    } else if (greeting=='e') {
        cout<<"Hello"<<endl;
    } else if (greeting=='r') {
        cout<<"Privet"<<endl;
    } else if (greeting=='g') {
        cout<<"Hallo"<<endl;
    }
    return 0;

}
