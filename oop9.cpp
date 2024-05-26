#include<iostream>
using namespace std;
class Number
{
    public:
    int no1,no2,no3;
    Number(int x,int y,int z)
    {
        no1=x;
        no2=y;
        no3=z;
    }
    void showNumber()
    {
        cout<<"The three Numbers are:"<<no1<<" "<<no2<<" "<<no3<<endl;
    }
    void checkMax()
    {
        if( no1>no2 && no1>no3)
        {
            cout<<no1<<"is greater:"<<endl;
        }
        else if(no2>no1 && no2>no3)
        {
            cout<<no2<<" is greater:"<<endl;
        }
        else 
        {
            cout<<no3<<" is greater:"<<endl;
        }
    }
};

int main()
{
    Number n(12,8,9);
    n.showNumber();
    n.checkMax();
    return 0;
}
