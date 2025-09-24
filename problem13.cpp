#include <iostream>
using namespace std;
int main() {
    char input;
    cout<<"please input one of g, y and r;"<<endl;
    cin>>input;
    if (input=='g') {
        cout<<"GO!"<<endl;
    } else if (input=='y') {
        cout<<"Get Ready!"<<endl;
    }else if (input=='r') {
        cout<<"Stop!"<<endl;
    } else {
        cout<<"wrong input!"<<endl;
    }
    return 0;
}