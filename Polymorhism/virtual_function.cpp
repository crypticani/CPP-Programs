#include <iostream>
using namespace std;

class LPU
{
public:
   virtual void display() = 0;
    // {
    //     cout<<"Base Class"<<endl;
    // }
   
};
class MCA:public LPU
{
    void  display()
    {
        cout<<"MCA"<<endl;
    }
    
};
class BCA:public LPU
{
    void display()
    {
        cout<<"BCA"<<endl;
    }
  
};

int main()
{
   LPU *mptr;
   BCA m1;
   mptr=&m1;
   mptr->display();
   return 0;
}