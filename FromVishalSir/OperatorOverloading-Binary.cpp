#include <iostream> 
using namespace std;

  class Teacher
  {  
      public:
      string name;
       Teacher()
       {
           name="kumar";
        }
       Teacher(string str1)
       {
           name=str1;
       }
    void getName()
    {
        cout<<name;
    }
    Teacher operator+(Teacher &t)
    {
        return name+t.name;
    } 
};
   int main()  
  {  
    Teacher T1("vishal"),T2("Ajay"),T3;
    T3=T1+T2; 
    T3.getName();
    return 0;
  }  