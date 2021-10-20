//A program to covert Rupees to dollars and Pound

#include <iostream>

using namespace std;

int main(){
    int choice;
    float rupees;

    while(1){
        cout<<"Enter the Rupees: ";
        cin>>rupees;
        cout<<"Enter Your Choice:"<<endl;
        cout<<"1. Covert to Dollar\n2. Covert to Pound\n0.Exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Rs."<<rupees<<" in dollar is $"<<rupees/75<<endl;
            break;
        case 2:
            cout<<"Rs."<<rupees<<" in pound is £"<<rupees/101<<endl;
            break;
        
        default:
            break;
        }

    }
}