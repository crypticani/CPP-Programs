/*
    A program to generate electricity bill:
    if meter reading is more then 100 unit then chargeble amount will be 6.95 Rs.per unit.
    if meter reading is less then 100 unit then chargeble amount will be 5.95 Rs. per unit.
*/
#include <iostream>
using namespace std;

int main(){
    int units_consumed;

    cout<<"Enter the Units consumed: ";
    cin>>units_consumed;
    cout<<endl;
    if(units_consumed<100){
        cout<<"You have to pay Rs."<<units_consumed*5.95<<endl;
    }
    else if(units_consumed>=100){
        cout<<"You will have to pay Rs."<<100*5.95+(units_consumed-100)*6.95<<endl;
    }
}