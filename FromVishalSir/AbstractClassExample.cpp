#include <iostream>

using namespace std;
class Area
{
protected:
    virtual void getArea()=0;

};
class Rec:public Area
{
    public:
    void getArea()
    {
        int w,h,res;
        cout<<"Enter h"<<endl;
        cin>>h;
        cout<<"Enter w"<<endl;
        cin>>w;
        res=w*h;
        cout<<res;
    }
};
class Circ:public Area
{
    public:
    void getArea()
    {
        int r;
        float res2;
        cout<<"Enter r"<<endl;
        cin>>r;
        res2=3.14*r*r;
        cout<<res2;
    }
};
int main()
{

  Rec r1;
  Circ c1;
  r1.getArea();
  c1.getArea();
    return 0;
}