#include <iostream> 
using namespace std; 
class employee 
    { 
    	int id;
        string name;
        int age;
        float salary; 
    	public: 
    	employee() 
    	{ 
    		id = 1234;
            name = "Ram";
            age = 24;
            salary = 43254;
    	}
        employee(int a, string b, int c, float d){
            id = a;
            name = b;
            age = c;
            salary = d;
        }
        employee(employee &obj){
            id = obj.id;
            name = obj.name;
            age = obj.age;
            salary = obj.salary;
        }
        void info(){
            cout<<"Employee Name: "<<name<<", age: "<<age<<", salary: "<<salary<<endl;
        }
        void Bonus(){
            int bonus = 1000;
            salary = salary+bonus;
            cout<<"Employee Name: "<<name<<", age: "<<age<<", salary: "<<salary<<endl;
        }
    }; 
int main() 
    { 
    	employee obj1; //default constructor
        employee obj2(1235, "Shyam", 25, 43435); //parametrized constructor
        obj1.info(); 
        obj2.info();
        employee obj3 = obj1;//copy constructor
        obj3.Bonus();
    } 