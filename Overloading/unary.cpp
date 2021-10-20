#include <iostream>

using namespace std;
class unary
{
public:
int marks;
void getmarks()
{
cout<<"Enter student marks"<<endl;
cin>>marks;
}
void display()
{
cout<<"Marks are"<<marks;
}
void operator--()
{
--marks;
}

};


int main()
{
unary ob1;
ob1.getmarks();
ob1.display();
--ob1; //-- operator is called
ob1.display();
return 0;
}