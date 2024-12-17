#include <iostream>
using namespace std;
int main () {
    int a, b, c;
    cout <<" Enter the first No : "<<endl;
    cin>>a;
    cout <<" Enter the second No : "<<endl;
    cin>>b;
    cout <<" Enter the third No : "<<endl;
    cin>>c;

    if (a<b && a<c){
        cout<<"First No is Lesser"<<endl;
    }
    else if (b<a && b<c){
        cout<<"Second No is Lesser"<<endl;
    }
    else{
        cout<<"Thired No is Lesser"<<endl;
    }

}