#include <iostream>
using namespace std ;
int main () {
    int ram , shayam , hari;
    cout <<"Enter the age of Ram"<<endl;
    cin>>ram;
    cout <<"Enter the age of Shayam"<<endl;
    cin>>shayam;
    cout <<"Enter the age of Hari"<<endl;
    cin>>hari;

    if (ram >shayam){
        cout<<"Shayam is youngest"<<endl;
    }
    else if (shayam >hari){
        cout<<"Hari is youngest"<<endl;
    }
    else {
        cout<<"Ram is youngest"<<endl;
    }
}

