#include<iostream>
#include<string.h>

using namespace std;
void checkLessThan(int no1)
{   
    
    try
    {
        if(no1<0)
    
        throw no1;
    
    }
     catch(int no1)
    {   cout<<"Exception Raised:"<<endl;
        cout<<"no1 is negative:"<<no1<<endl;
    }
}

void checkNumberLessThanZero(int no2)
{   try
    {if(no2==0)
    {
        throw "divide by zero!!!!";
    }
    }
    catch(char const *msg)
    {
        cout<<"exception raised:"<<endl;
        cout<<msg;
    }
}

int main()
{   try
    {int no1,no2;
    cout<<"enter the numbers:";
    
    cin>>no1>>no2;
    checkLessThan(no1);
    checkNumberLessThanZero(no2);
    }

   
    catch(int no1)
    {
        cout<<"no1 is negative:"<<no1<<endl;
    }
    catch(char const *msg)
    {
         cout<<"exception raised:"<<endl;
        cout<<msg;
    }
    catch(...)
    {
        cout<<"Catch All"<<endl;
    }
    return 0;

}
