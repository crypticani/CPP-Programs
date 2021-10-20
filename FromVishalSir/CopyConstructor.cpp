#include <iostream>
using namespace std;

class Mobile
{
private:
    string companyName;
    string modelNo;
public:
    Mobile()
    {
        cout<<"Default Constructor"<<endl;
        companyName="Samsung";
        modelNo="M12";

    }
    Mobile(string mName, string mNo)
    {
        cout<<"Paramerized Constructor"<<endl;
        companyName=mName;
        modelNo=mNo;
    }
    Mobile(Mobile &m1)
    {
        cout<<"Copy Constructor"<<endl;
        companyName=m1.companyName;
        modelNo=m1.modelNo;

    }
   
    void getDetails()
    {
        cout<<"Mobile Name: "<<companyName<<endl;
        cout<<"Mobile Model Number: "<<modelNo<<endl;
    }

};
int main()
{
    Mobile m2;
    m2.getDetails();
    Mobile m3("POCO","M2");
    m3.getDetails();
    Mobile m4=m3;//copy constructor
    m4.getDetails();
    return 0;
}
