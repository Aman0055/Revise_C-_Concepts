#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;

    if ((n%3 == 0 || n%5 == 0) && (n%15 != 0)){
        cout  <<"Number is divisible by 3 and 5 but not by 15"<<endl;
    }
    else {
        cout <<"Given argument is wrong"<<endl;
    }
}