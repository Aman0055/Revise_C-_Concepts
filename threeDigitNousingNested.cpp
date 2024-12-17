#include <iostream>
using namespace std ;

int main () {
    int a , b, c;
    cout <<"Enter 1st no"<<endl;
    cin>>a;
    cout <<"Enter 2nd no"<<endl;
    cin>>b;
    cout <<"Enter 3rd no"<<endl;
    cin>>c;

    if (a>b){
        if (a>c){
            cout <<"A is greater :"<<a<<endl;
        }
        else {
            cout<<"C is greater :"<<c<<endl;
        }
    }
    else {
        if (b>c){
            cout <<"B is greater :"<<b<<endl;
        }
        else{
            cout <<"C is greater :"<<c<<endl;
        }
    }
}