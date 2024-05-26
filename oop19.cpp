#include<iostream>
using namespace std;
class base
{
    public:
    int x,y;
    base(int x,int y)
    {   this->x=x;
        this->y=y;
        cout<<"Inside base class constructor:"<<endl;

    }
};
class derived:public base 
{   public:
    int z;


    derived(int n1,int n2,int n3):base(n2,n3)
    {
        z=n2+n3;
        cout<<"inside derived class constructor:"<<endl;
    }
    void show()
    {
        cout<<"\nX="<<x;
        cout<<"\ny="<<y;
        cout<<"\nz="<<z;
    }

};
int main()
{   derived d(12,4,5);
    d.show();
    return 0;


}