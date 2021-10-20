#include <iostream>
using namespace std;


int main()
{
    int a , b;
    cout<<"Enter two numbers:";
    cout<<endl;
    cin>>a>>b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<a<<" "<<b;
return 0;
}