#include<iostream>
#include<exception>
using namespace std;
class Demo
{

};
class derived :public Demo
{

};
int main()
{
    derived obj;
    try
    {
    throw obj;
    }
    catch(derived obj)
    {
        cout<<" derived Exception Raised!!!";
    }
    catch(Demo obj)
    {
        cout<<" Base Exception Raised!!!";
    }

    return 0;
    

}