#include<iostream>
#include<string.h>
using namespace std;
class demo 
{
    public:
    string name;
    int age;
    demo(string name,int age)
    {   
        this->name=name;
        this->age=age;

    }
    void print()
    {
        cout<<name;
        cout<<age;
    }
};
int main()
{   
    demo d("shubhangi",18);
    d.print();
   
}