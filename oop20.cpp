#include<iostream>
using namespace std;
int main()
{
    int age;
    try
    {
        cout<<"enter the age:";
        cin>>age;
        if(age<=0)
        {
            throw age;
        }
        else 
        {
            cout<<"age:"<<age<<endl;
        }
    }
    catch(int age )
    {
        cout<<"Age cannot be 0 or less than 0"<<endl;
    }
    return 0;
    
}