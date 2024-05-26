#include<iostream>
using namespace std;
class Employee
{
    public:
    char name[10];
    int salary;
    static int Ecount;
    int employeeNumber;
    
    void getData()
    {
        cout<<"Enter the name of the employee:";
        cin>>name;
        cout<<"Enter the salary of the employee:";
        cin>>salary;
        employeeNumber=getEcount();
       

        
    }
   
    void setData()
    {
        cout<<"the name of the employee:"<<name<<endl;
        cout<<"the salary of the employee:"<<salary<<endl;
        cout<<"Employee Number:"<<employeeNumber<<endl;
    }
     static int getEcount()
    {
        Ecount=Ecount+1;
        return Ecount;
    }
};
int Employee::Ecount;
int main()
{
    Employee emp1,emp2;

    cout<<"\n*****DETAILS OF EMPLOYEE 1:*****"<<endl;
    emp1.getData();
    
    
    emp1.setData();
    cout<<"\n*****DETAILS OF EMPLOYEE 2:*****"<<endl;
    emp2.getData();
    
    emp2.setData();
    return 0;
    

}