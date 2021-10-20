// A program to check if you are eligible to cast a vote or not

#include <iostream>
using namespace std;


int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<(age>=18?"You can vote":"You can't vote");
return 0;
}