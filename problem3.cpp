#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"enter a, b, c"<<endl;
    if(a>b  && a>c) {
        cout<<"a is the largest"<<endl;
    }else if(b>c && b>a) {
        cout<<"b is the largest"<<endl;
    }else {
        cout<<"c is the largest"<<endl;
    }
    return 0;
}