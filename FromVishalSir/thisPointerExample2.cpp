#include <iostream>

using namespace std;
class bank
{
    public :
       void display()
       {
           cout<<"Address of object"<<endl;
           cout<<this;
       }
};

int main()
{
    bank b1;
    b1.display();

    return 0;
}