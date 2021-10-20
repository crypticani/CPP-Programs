#include <iostream>
using namespace std;
int main()
{
    int x=5,y=5,z;
    x = ++x;
    cout<<x<<endl;
    y = --y;
    cout<<y<<endl;
    z = x++ + y--;
    cout<<x<<" "<<y<<endl;
    cout<<z;
}