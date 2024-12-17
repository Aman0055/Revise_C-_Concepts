#include <iostream>
using namespace std;
int main () {
    int cost_price ;
    cout<<"Enter the cost Price"<<endl;
    cin>>cost_price;


    int selling_price ;
    cout<<"Enter the Selling Price "<<endl;
    cin>>selling_price;

    if (cost_price > selling_price){
        cout <<"The seller is in loss"<<endl;
    }
    else if (cost_price < selling_price){
        cout<<"The seller is in Profit"<<endl;
    }
    else {
        cout <<"No Profit No Loss"<<endl;
    }
}