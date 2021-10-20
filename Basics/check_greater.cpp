#include <iostream>
using namespace std;


int main()
{
    int a , b, greater;
    cout<<"Enter two numbers:";
    cout<<endl;
    cin>>a>>b;
    greater = (a>b)?a:b;
    cout<<greater;
return 0;
}