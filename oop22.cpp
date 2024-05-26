#include<iostream>
using namespace std;
void add(int n1,int n2)
{if(n1<0)
{   cout<<"Inside Function"<<endl;
    throw n1;
}
    
}
int main()
{   
    try
    {cout<<"before call"<<endl;

    add(-10,20);

    cout<<"after Call"<<endl;
    }
    catch(int e)
    {
        cout<<"Exception Raised...."<<endl;
        
    }
    return 0;


}