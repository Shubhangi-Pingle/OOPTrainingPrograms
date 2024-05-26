#include<iostream>
using namespace std;
void add(int n1,int n2)
{

    try
    {    cout<<"Inside Function"<<endl;
        
        if(n1<0)
    {  
        throw n1;
    }
    }
    catch(int e)
    {
        cout<<"Exception Raised!!!"<<n1<<endl;
    }
    
}
int main()
{   
    
    cout<<"before call"<<endl;

    add(-10,20);

    cout<<"after Call"<<endl;
    
   
    return 0;


}