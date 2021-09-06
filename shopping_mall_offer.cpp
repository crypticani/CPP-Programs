/* A Program for shopping mall.
   In Shopping mall,there is a mobile shop.
   In this mobile shop you are getting offer if you will purchase mobile phone with power bank you will get 10% discount,
   but if you purchase any mobile or power bank you will get only 5% discount. 
   Display this offer to the user screen whenever user is selecting the option.
*/

#include <iostream>
#include <unistd.h>
#define TRANSACTION_TIME 5
using namespace std;

int main(){
    int choice;
    int balance=1000;
    cout<<"Welcome to the ABC Mall"<<endl;
    while(1){
        sleep(2);
        cout<<endl<<"Please select an Input to get the offer details."<<endl;
        cout<<"1. Only Mobile"<<endl<<"2. Only Powerbank"<<endl<<"3. Mobile with Powerbank"<<endl<<"4. Nothing"<<endl<<"0. Exit"<<endl;;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"You have selected only mobile."<<endl;
                cout<<"You will get 5% discount"<<endl;
                break;
            case 2:
                cout<<"You have selected only Powerbank."<<endl;
                cout<<"You will get 5% discount"<<endl;
                break;
            case 3:
                cout<<"You have selected Mobile with Powerbank."<<endl;
                cout<<"You will get 10% discount"<<endl;
                break;
            case 4:
                cout<<"See you next time"<<endl;
                sleep(1);
                exit(0);
                break;
            case 0:
                exit(0);
                break;
            default:
                cout<<"Invalid Choice"<<endl;
        }
    }
    
}