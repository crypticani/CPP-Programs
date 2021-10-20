// A simple program to make the user guess the number

#include <iostream>

using namespace std;

int main(){
    int number=2021, input;
    while(1){
        cout<<"Enter a number: ";
        cin>>input;
        if (input==number)
        {
            cout<<"You guessed it right."<<endl;
            exit(0);
        }
        else{
            cout<<"Sorry! Please try again"<<endl;
        }
    }
    
}