#include <iostream>
using namespace std;

class Base
{
    public:
    virtual void display()
    {
        cout << "Class::Base";
    }
};
class Derived:public Base
{
    public:
    void display()
    {
        cout << "Class::Derived";
    } 
}; 
        
int main(){
    Base* b; //Base class pointer Derived d; //Derived class object b = &d; b->show_val();   //late Binding
}