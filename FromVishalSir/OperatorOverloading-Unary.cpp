//Example of Unary operator overloading
#include <iostream>

using namespace std;
class bodyweight
{
public:
    int wt;
    bodyweight()
    {
        wt=0;
    }
    bodyweight(int w)
    {
        wt=w;

    }
    void operator ++()
    {
        ++wt;

    }
    void operator ++(int)
    {
        wt++;

    }
    void getWeight()
    {
        cout<<"wt:"<<wt<<endl;
    }
};
int main()
{
    bodyweight b1(80);
    b1.getWeight();//80
    ++b1;
    b1.getWeight();
    b1++;
    b1.getWeight();
    return 0;
}