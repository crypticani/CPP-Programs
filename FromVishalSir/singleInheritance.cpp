#include <iostream>
#include<string>

using namespace std;
class Employee
{
        protected:
                string EmployeeName;
                int EmployeeID;
                string designation;
                double salary;
        public:
        Employee()
        {
            EmployeeName="abc";
            EmployeeID=1234;
            designation="developer";
            salary=25000;
        }
        void setDetails()
        {
                cout<<"Enter Employee Id"<<endl;
                cin>>EmployeeID;
                cin.ignore();
                cout<<"Enter Employee Name"<<endl;
                getline(cin,EmployeeName);
                cout<<"Enter Employee designation"<<endl;
                getline(cin,designation);
                cout<<"Enter Employee Salary"<<endl;
                cin>>salary;
        }
        void getDetails()
        {
                cout<<"Employee Details"<<endl;
                cout<<"********************"<<endl;
                cout<<"Employee Name "<<EmployeeName<<endl;
                cout<<"Employee Id "<<EmployeeID<<endl;
                cout<<"Employee designation "<<designation<<endl;
                cout<<"Employee Monthly Salary "<<salary<<endl;
                cout<<"********************"<<endl;
        }
};
class Salary: public Employee
{
public:
    int noOfWorkingDays;
    void setnoOfWorkingDays()
    {
        cout<<"Enter no.of working days"<<endl;
        cin>>noOfWorkingDays;
    }
    int getnoOfWorkingDays()
    {
        return noOfWorkingDays;
    }
    double calCalculateSalary()
    {
        double oneday,totalSal;
        if(noOfWorkingDays==31)
        {
            totalSal=salary;
          return   totalSal;
        }
        else{
            oneday=salary/31;
            totalSal=oneday*noOfWorkingDays;
            return totalSal;

        }
    }
};
int main()
{
    Salary e1;
    e1.setDetails();
    e1.getDetails();
    e1.setnoOfWorkingDays();
    e1.getnoOfWorkingDays();
   cout<<"Total Salary: "<< e1.calCalculateSalary()<<endl;
    return 0;
}