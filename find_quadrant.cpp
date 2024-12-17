#include <iostream>
using namespace std;

int main () {
    int x, y;
    cout<<"Enter x_asis :"<<endl;
    cin>>x;
    cout<<"Enter y_asis :"<<endl;
    cin>>y;

    if (x> 0 && y>0){
        cout <<"This lie in the 1st Quadrant"<<endl;
    }
    else if (x<0 && y>0){
        cout <<"This lie in the 2nd quadrant"<<endl;
    }
    else if (x<0 && y<0){
        cout<<"This lie in the 3rd quadrant"<<endl;
    }
    else {
        cout<<"This lie in the 4th Quadrant"<<endl;
    }
}