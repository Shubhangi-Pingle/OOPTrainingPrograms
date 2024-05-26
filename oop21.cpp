#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    int no1,no2;
    cout<<"enter the numbers:";
    string A;
    cin>>no1>>no2;

    try
    
    {if(no1<0)
    {
        throw no1;
    }
    else if(no2==0)
    {
        throw A;
    }
    else 
    {
        cout<<"Division:"<<no1/no2<<endl;
    }
    }
    catch(int no1)
    {
        cout<<"no1 is negative:"<<endl;
    }
    catch(string x)
    {
        cout<<"no2 is zero"<<endl;
    }
    return 0;

}
/* OUTPUT
    CASE 1:
    enter the numbers:4
    2
    Division:2
    CASE 2:
    enter the numbers:-1
    4
    no1 is negative:
    CASE 3:
    enter the numbers:2
    0
    no2 is zero

*/