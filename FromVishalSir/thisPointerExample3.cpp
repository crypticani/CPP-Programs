#include<iostream>
using namespace std;
class Max
{
    int a;
    public:
        void getdata()
        {
            cout<<"Enter the Value :";
            cin>>a;
        }
        Max &greater(Max &x)
        {
            if(x.a>=a)
                return x;
            else return *this;
        }
        void display()
        {
            cout<<"Maximum No. is : "<<a<<endl;
        }
};
int main()
{
    Max one,two,three;
    one.getdata();
    two.getdata();
    three=one.greater(two);
    three.display();
    
    return 0;
}