#include<iostream>
using namespace std;
class Base 
{
    public:
    int i;
};
 class derived1: public Base 
{   public:


};
class derived2: public Base 
{
    public:

};
class derived3:public derived1,public derived2
{public:


};
int main()
{
    derived3 d;
    d.derived1::i=10;
    

    return 0;
}