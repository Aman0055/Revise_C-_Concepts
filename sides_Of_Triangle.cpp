#include <iostream>
using namespace std;
int main () {
    int a, b, c;
    cout <<"Enter the First sidees of Triangle"<<endl;
    cin>>a;
    cout <<"Enter the Second sidees of Triangle"<<endl;
    cin>>b;
    cout <<"Enter the Third sidees of Triangle"<<endl;
    cin>>c;

    if ((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"Valid Triangle"<<endl;
    }
    else {
        cout<<"Invalid Triangle"<<endl;
    }
}