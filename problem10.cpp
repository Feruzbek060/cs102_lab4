#include <cmath>
#include <iostream>

using namespace std;
int main() {
    int x1, x2, y1, y2, distance;
    x1=0;
    y1=0;
    cout<<"enter x2 nd y2:"<<endl;
    cin>>x2>>y2;
    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    if (distance<=10) {
        cout<<"point is inside the circle"<<endl;
    }else {
        cout<<"point is outside the circle"<<endl;
    }
    return 0;


}