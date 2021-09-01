#include <iostream>
using namespace std;


int main()
{
    int a , b, c;
    cout<<"Enter two numbers:";
    cout<<endl;
    cin>>a>>b;
    c = a;
    a = b;
    b = c;
    cout<<a<<" "<<b;
return 0;
}