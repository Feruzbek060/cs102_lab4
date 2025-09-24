#include <iostream>
using namespace std;
int main() {
    int speed;
    cout<<"enter vehicle speed:"<<endl;
    cin>>speed;
    if (speed<20) {
        cout<<"too slow"<<endl;
    } else if (speed>80) {
        cout<<"too fast"<<endl;
    } else {
        cout<<"just right"<<endl;
    }
    return 0;
}