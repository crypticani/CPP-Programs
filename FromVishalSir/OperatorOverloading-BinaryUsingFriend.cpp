#include <iostream>

using namespace std;

class Add
{

private:
    int a;
    int b;
public:
    Add()
    {
        a=10;
        b=20;
    }
friend Add operator +(Add &x, Add &y);


    void getresult()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
Add operator +(Add &x,Add &y)
{
        Add z;
        z.a=x.a+y.a;
        z.b=x.b+y.b;
        return z;
}
int main()
{
   Add a1,a2,a3;
   a3=a1+a2;
   a3.getresult();

    return 0;
}