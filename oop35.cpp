#include<iostream>
using namespace std;
class Number
{
    public:
    int no1,no2;
    Number()
    {
        no1=0;
        no2=0;
    }
    Number(int n1,int n2)
    {   no1=n1;
        no2=n2;

    }
    Number operator +(Number n)
    {       Number temp; 
           temp.no1= no1+n.no1;
           temp.no2= no2+n.no2;
           return temp;

    }
    void showNumber()
    {
        cout<<no1<<" "<<no2<<endl;
    }

};
int main()
{
    Number N1(12,13);

    Number N2(10,10);
    Number N3;
    Number ans;
    ans=N1+N2;
    cout<<"\n Numbers of first object:";
    N1.showNumber();
    cout<<"\n Numbers of second object:";
    N1.showNumber();
    cout<<"\n Addition of objects:";
    ans.showNumber();
    
    
    return 0;
}