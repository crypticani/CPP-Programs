// A program to perform banking transaction operations:withdrawal, deposit and check balance.

#include <iostream>
#include <unistd.h>
#define TRANSACTION_TIME 5
using namespace std;

int main(){
    int choice;
    int balance=1000;
    cout<<"Welcome to the XYZ Bank"<<endl;
    while(1){
        sleep(2);
        cout<<endl<<"Please select an Input."<<endl;
        cout<<"1. Check Balance"<<endl<<"2. Deposit"<<endl<<"3. Withdrawal"<<endl<<"0. Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Your Balance is Rs."<<balance<<endl;
                break;
            case 2:
                cout<<"Deposit Section"<<endl;
                cout<<"Enter the amount you want to deposit: ";
                int deposit_amount;
                cin>>deposit_amount;
                balance = balance + deposit_amount;
                cout<<"Transaction in progress..."<<endl;
                sleep(TRANSACTION_TIME);
                cout<<"Rs."<<deposit_amount<<" credited in your account"<<endl;
                cout<<"Your updated balance is Rs."<<balance<<endl;
                break;
            case 3:
                cout<<"Withdrawal Section"<<endl;
                cout<<"Enter the amount you want to withdraw: ";
                int withdrawal_amount;
                cin>>withdrawal_amount;
                balance = balance - withdrawal_amount;
                cout<<"Transaction in progress..."<<endl;
                sleep(TRANSACTION_TIME);
                cout<<"Rs."<<withdrawal_amount<<" debited from your account"<<endl;
                cout<<"Your updated balance is Rs."<<balance<<endl;
                break;
            case 0:
                exit(0);
                break;
            default:
                cout<<"Invalid Choice"<<endl;
        }
    }
    
}