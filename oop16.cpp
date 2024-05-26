#include<iostream>
using namespace std;
class Animals
{
    public:
    int height;
    char color[10];
    char type[10];
    float weight;
    void getdata()
    {
        cout<<"enter the height:";
        cin>>height;
        cout<<"enter the color:";
        cin>>color;
        cout<<"enter the type:";
        cin>>type;
        cout<<"enter the weight:";
        cin>>weight;

    }
    void display()
    {
        cout<<"height:"<<height<<endl;
        cout<<"color:"<<color<<endl;
        cout<<"type:"<<type<<endl;
        cout<<"weight:"<<weight<<endl;

    }



};
class Terrestrial: public Animals
{public:
    int legs;
    int speed;
    char tail[5];
    void getdata()
    {
        cout<<"enter the legs:";
        cin>>legs;
        cout<<"enter the speed:";
        cin>>speed;
        cout<<"tail :";
        cin>>tail;
    }
    void display()
    {
        cout<<"legs:"<<legs<<endl;
        cout<<"speed:"<<speed<<endl;
        cout<<"tail:"<<tail<<endl;
    }



};
class Aquatic:public Animals
{   public:
    int fin;
    void getdata()
    {
        cout<<"enter the no. of fins:";
        cin>>fin;
    }
    void display()
    {
        cout<<"fin:"<<fin<<endl;
    }


};
class Amphibian:public Terrestrial ,public Aquatic
{   public:
    int heartchember;
    void display()
    {   cout<<"heartchember:"<<heartchember<<endl;

    }


};
int main()
{    
        Amphibian a;
        Animals A;
        cout<<"ENTER THE DETAILS:"<<endl;
        A.getdata();
        a.Terrestrial::getdata();
        a.Aquatic::getdata();
        a.heartchember=3;
        cout<<"****DETAILS OF ANIMAL:********"<<endl;
        A.display();
        a.Terrestrial::display();
        a.Aquatic::display();
        a.display();
        return 0;



}