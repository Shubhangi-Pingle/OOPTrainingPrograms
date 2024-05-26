#include<iostream>
using namespace std;
class Animal 
{
    protected:
    int height;
    char color[10];
    char type[10];
    float weight;
    public:
    void getdata()
    {
        cout<<"enter the height:";
        cin>>height;
        cout<<"enter the color:";
        cin>>color;
        cout<<"enter the type of animal:";
        cin>>type;
        cout<<"enter the weight of animal:";
        cin>>weight;
    }
};
class Elephant:public Animal 
{
    public:
    int lentrunk;
    int leg;
    void getLeg()
    {
        cout<<"enter the no. of leg:";
        cin>>leg;
    }
    void showdata()
    {
        cout<<"height:"<<height<<endl;
        cout<<"color:"<<color<<endl;
        cout<<"type:"<<type<<endl;
        cout<<"trunk length:"<<lentrunk<<endl;
        cout<<"leg:"<<leg<<endl;
        cout<<"weight:"<<weight;
    }

};
int main()

{
    Elephant e;
    e.getdata();
    e.getLeg();
    e.lentrunk=5;
    e.showdata();
    return 0;
}
