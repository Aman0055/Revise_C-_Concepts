#include <iostream>
using namespace std;

int main () {
    int l;
    cout<<"Enter the length of rectangle"<<endl;
    cin>> l;

    int b;
    cout<<"Enter the breathe of rectangle"<<endl;
    cin>>b;

    int area = l*b;
    cout <<"Area of rectangle :"<<area<<endl;

    int perimeter = 2 * (l + b);
    cout <<"Perimeter of rectangle :"<<perimeter <<endl;
}