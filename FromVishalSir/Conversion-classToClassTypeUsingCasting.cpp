#include <iostream>

using namespace std;

class A
{
public:
    int a;
    int b;
    A()
    {
        a=0;
        b=0;
    }

    void getA()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
class B
{
public:
    int x;
    int y;
    B()
    {
        x=10;
        y=20;
    }

    void getB()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
    operator A()
    {
        A m;
        m.a=x;
        m.b=y;
       return m;
    }
};
int main()
{
    A a1;
    B b1;
    a1=b1;
    a1.getA();
    return 0;
}