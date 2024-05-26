#include<iostream>
using namespace std;
class Base 
{
    public:
    int i=10;
};
 class derived1: virtual public Base 
{   public:


};
class derived2: virtual public Base 
{
    public:

};
class derived3:public derived1,public derived2
{public:
void display()
{
    cout<<i;
}

};
int main()
{
    derived3 d;
    d.i=10;
    

    return 0;
}