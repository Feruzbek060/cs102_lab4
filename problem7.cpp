#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout<<"input a, b, c angles:"<<endl;
    cin>>a>>b>>c;
    if (a+b+c==180) {
        cout<<"it is a valid triangle"<<endl;
    } else {
        cout<<"it is not a valid triangle"<<endl;
    }
    return 0;
}