#include<iostream>
using namespace std;
class animal
{   protected:
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
class Amphibian:public animal
{
    public:
    int heartchember;
    void getNo()
    {
        cout<<"enter the no. of heart chember:";

        cin>>heartchember;
    }

        

} ;
class Frog:public Amphibian 
{
    public:
    void showdata()
    {
            cout<<"height:"<<height<<endl;
            cout<<"color:"<<color<<endl;
            cout<<"type:"<<type<<endl;
        
            cout<<"weight:"<<weight;
    }

};
int main()
{
    Frog g;
    g.getdata();
    g.getNo();
    g.showdata();
    return 0;

}