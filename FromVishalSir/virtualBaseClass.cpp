#include <iostream>

using namespace std;

 class A
{
public:
    int a;
    A()
    {
        a=10;
    }
   void getA()
    {
        cout<<a<<endl;
    }
};
class B: virtual public A
{
    public:
    int b;
    B()
    {
        b=20;
    }
    void getB()
    {
        cout<<b<<endl;
    }
};
class C: virtual public A
{
    public:
    int c;
    C()
    {
        c=30;
    }
    void getC()
    {
        cout<<c<<endl;
    }
};
class D:public B,public C
{
    public:
    int d;
    D()
    {
        d=40;
    }
    void getD()
    {
        cout<<d<<endl;
    }
};
int main()
{
    D d1;
    d1.getD();
    d1.getC();
    d1.getB();
    d1.getA();
    return 0;
}