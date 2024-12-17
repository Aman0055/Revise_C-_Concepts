#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter the digit: ";
    cin>>n;
    
    // Arithemetic term : 4, 7, 10, 13, 16, 19, 21......
    for (int i=4; i<=(3*n+1); i+=3){
            cout<<i<<" ";
    }
}