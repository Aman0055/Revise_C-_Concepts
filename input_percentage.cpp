#include <iostream>
using namespace std;

int main ()  {
    int marks;
    cout<<"enter marks :"<<endl;
    cin>>marks;

    if (marks >= 81 && marks <=100){
        cout<<"Very Good"<<endl;
    }
    else if (marks >= 61 && marks <=80){
        cout<<"Good"<<endl;
    }
    else if (marks >= 41 && marks <= 60) {
        cout <<"Average"<<endl;
    }
    else {
        cout <<"fail";
    }
}