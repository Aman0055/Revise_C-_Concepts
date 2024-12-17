#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter three digit no :"<<endl;
    cin>>n;

    if (n>99 && n<1000){
        cout <<"This is a three Digit no"<<endl;
    }
    else {
        cout<<"This is not"<<endl;
    }
}