#include<iostream>
using namespace std;
class Number
{
    public:
    int no1,no2;
    Number()
    {   no1=12;
        no2=14;

    }
    Number(int x,int y)
    {
        no1=x;
        no2=y;

    }
    Number(Number &obj)
    {
        no1=obj.no1;
        no2=obj.no2;
    }
    void show()
    {
        cout<<no1<<" "<<no2<<endl;
    }
};
int main()
{
    Number n1;
    n1.show();
    Number n2(12,13);
    n2.show();
    Number n3(n2);
    n3.show();
    return 0;
}