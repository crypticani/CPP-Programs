#include <iostream>

using namespace std;
class unary
{
    public:
    // int marks;
    bool result;
    void getmarks()
    {
        cout<<"Enter student result: 1 for pass, 0 for fail."<<endl;
        cin>>result;
    }
    void display()
    {
        cout<<"Marks are"<<result<<endl;
    }
    void operator!()
    {
        !result;
    }

};

int main()
{
    unary ob1;
    ob1.getmarks();
    ob1.display();
    !ob1; //! operator is called
    ob1.display();
    return 0;
}