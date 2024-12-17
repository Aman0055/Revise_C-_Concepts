#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the no :";
    cin >>n;

    if (n%3 == 0 || n%5 ==0){
        cout<<"Its is divisible by both 3 Or 5"<<endl;
    }
    else {
        cout <<"Number is not divisible by 3 Or 5"<<endl;
    }
}