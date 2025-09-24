#include <iostream>
using namespace std;
int main() {
    double weight, package_price;
    double weight2, package_price2;
    cout<<"please enter weight and package price;"<<endl;
    cin>>weight>>package_price;
    cout<<"please enter weight2 and package price2;"<<endl;
    cin>>weight2>>package_price2;
    double price1=package_price/weight;
    double price2=package_price2/weight2;
    if (price1<price2) {
        cout<<"package 1 is better than package 2"<<endl;
    }else if (price1>price2) {
        cout<<"package 2 is better than package 1"<<endl;
    } else {
        cout<<"both same"<<endl;
    }
    return 0;
}