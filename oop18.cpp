#include<iostream>
using namespace std;
class Shape 
{
    public:
        int x,y;
        void getdetail()
        {
            cout<<"enter the values of x and y:";
            cin>>x>>y;
        }
        virtual void Area()=0;
};
class Rectangle:public Shape 
{
    public:
    int rectArea;
        void Area()
        {
            rectArea=x*y;
            cout<<"Area of rectangle:"<<rectArea<<endl;

        }

};
class Traingle:public Shape 
{
    public:
    int tArea;
        void Area()
        {
            tArea=0.5*x*y;
            cout<<"Area of Traingle:"<<tArea<<endl;

        }

};
int main()
{
    Traingle T;
    Shape *s;
    s =&T;
    s->getdetail();
    s->Area();
    Rectangle R;
    s = &R;
    s->getdetail();
    s->Area();

    return 0;


}


