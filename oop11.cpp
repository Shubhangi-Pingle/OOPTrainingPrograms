#include<iostream>
using namespace std;
class Number
{   int x;

    protected:
    int p=30;
    int y=20;
    public:

    void addition()
    {
        cout<<p+y<<endl;
    }


};
class derived:public Number
{   int z;
    public:
    void getZ()
    {   cout<<p<<" "<<y<<endl;

    }

};
int main()
{   derived d;
d.getZ();
    d.addition();
    
   
    return 0;
    



}