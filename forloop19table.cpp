#include <iostream>
using namespace std;

int main () {

    // One method to print table of 19
    // for (int i=19; i<=190; i++ ){
    //     if(i%19==0) cout<<i<<" ";
    // }

    // Another method to print table of 19 
    for (int i=19; i<=190; i+=10){
        cout<<i<<" ";
    }
}