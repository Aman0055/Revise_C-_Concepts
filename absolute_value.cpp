#include <iostream>
using namespace std ;
int main () {
    int n ;
    cout<<"Enter the value" <<endl;
    cin >>n;
    // if (n>=0){
    // cout<<n<<endl;
    // }
    // else {
    //     cout<<-n<<endl; // n<0
    // }

    // If you want to change from its absolute value :
    if (n<0) n =-n ;
    cout<<n<<endl;
}