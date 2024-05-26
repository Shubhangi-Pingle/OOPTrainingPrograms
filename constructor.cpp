#include<iostream>
using namespace std;
class base1
{
    public:
    base1()
    {
        cout<<"base class constructor:";
    }
};
class derived:public base1{
    public:
    derived()
    {
        cout<<"Derived class constructor:";
    }
};
int main()
{
    derived d;
    return 0;
}