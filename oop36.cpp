#include<iostream>
using namespace std;
class Base 
{
    public:
        virtual void show()
        {
            cout<<"\n inside base class";
        }
};
class derive1:public Base 
{   public:
     void show()
    {
        cout<<"\n inside derive1";
    }




};
class derive2:public Base 
{
    public:
    void show()
    {
        cout<<"\n inside derive2";
    }


};
int main()
{
    Base *ptr,obj;
    derive1 obj1;
    derive2 obj2;
    ptr=&obj;
    ptr->show();
    ptr=&obj1;
    ptr->show();
    ptr=&obj2;
    ptr->show();
    return 0;

}