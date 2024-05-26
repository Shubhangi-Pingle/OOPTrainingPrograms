#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
    char name[10];
    int roll;
    char Class[10];
    static string collegeName;
    void getData()
    {
        cout<<"Enter the  Name:";
        cin>>name;
        cout<<"Enter the roll:";
        cin>>roll;
        cout<<"Enter the  Class:";
        cin>>Class;

    }
    void setData()
    {   cout<<"Enter the  Name:"<<name<<endl;
        cout<<"Enter the roll:"<<roll<<endl;
        cout<<"Enter the  Class:"<<Class<<endl;
        cout<<"College Name:"<<collegeName<<endl;


    }


};
string student::collegeName="MET'S Institute Of Engineering:";
int main()
{
    student s1,s2;
    s1.getData();
    s1.setData();
    s2.getData();
    s2.setData();
return 0;



}
