#include <iostream>

using namespace std;

int main(){
    int choice;
    int min_limit = 1;
    int max_limit = 5;
    int total_amount = 0;
    int prices[] = {10, 10, 20, 30, 50};
    while(1){
        int quantity = 0;
        int amount = 0;
        cout<<endl<<"Please select an Input."<<endl;
        cout<<"1.Soap\n2.ToothPaste\n3.ToothBrush\n4.Oil\n5.Detergent\n0.Exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter quantity: ";
            cin>>quantity;
            if(quantity<=max_limit && quantity>=min_limit){
                amount = quantity*prices[0];
                total_amount = amount+total_amount;
                cout<<"Price for this item will be Rs."<<amount<<endl;
                cout<<"Your total amount will be Rs."<<total_amount<<endl;
            }
            else{
                cout<<"Invalid quantity"<<endl;
            }
            break;
        case 2:
            cout<<"Enter quantity: ";
            cin>>quantity;
            if(quantity<=max_limit && quantity>=min_limit){
                amount = quantity*prices[1];
                total_amount = amount+total_amount;
                cout<<"Price for this item will be Rs."<<amount<<endl;
                cout<<"Your total amount will be: "<<total_amount<<endl;
            }
            else{
                cout<<"Invalid quantity"<<endl;
            }
            break;
        case 3:
            cout<<"Enter quantity: ";
            cin>>quantity;
            if(quantity<=max_limit && quantity>=min_limit){
                amount = quantity*prices[2];
                total_amount = amount+total_amount;
                cout<<"Price for this item will be Rs."<<amount<<endl;
                cout<<"Your total amount will be: "<<total_amount<<endl;
            }
            else{
                cout<<"Invalid quantity"<<endl;
            }
            break;
        case 4:
            cout<<"Enter quantity: ";
            cin>>quantity;
            if(quantity<=max_limit && quantity>=min_limit){
                amount = quantity*prices[3];
                total_amount = amount+total_amount;
                cout<<"Price for this item will be Rs."<<amount<<endl;
                cout<<"Your total amount will be: "<<total_amount<<endl;
            }
            else{
                cout<<"Invalid quantity"<<endl;
            }
            break;
        case 5:
            cout<<"Enter quantity: ";
            cin>>quantity;
            if(quantity<=max_limit && quantity>=min_limit){
                amount = quantity*prices[4];
                total_amount = amount+total_amount;
                cout<<"Price for this item will be Rs."<<amount<<endl;
                cout<<"Your total amount will be: "<<total_amount<<endl;
            }
            else{
                cout<<"Invalid quantity"<<endl;
            }
            break;
        case 0:
        exit(0);
        break;
        default:
            cout<<"Invalid Choice"<<endl;
            break;
        }
    }
}