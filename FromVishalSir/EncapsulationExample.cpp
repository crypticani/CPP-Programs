#include <iostream>

using namespace std;
class Employee
{
private:
    int eid;
    string Ename;

public:
    void setEname(string name)
    {
        Ename=name;
    }
    string getEname()
    {
        return Ename;
    }

    void setEid(int id)
    {
        eid=id;
    }
    int getEid()
    {
        return eid;
    }
};

int main()
{
   Employee e1;
   e1.setEid(14000);
   e1.setEname("Kumar Vishal");

  cout<<"Employee Id is: "<< e1.getEid()<<endl;
  cout<<"Employee Name is: "<< e1.getEname();
    return 0;
}