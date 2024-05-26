#include<iostream>
using namespace std;
int shownumber()
{
        cout<<"\nInside without parameter:";
}
int shownumber(int n)
{
        cout<<"\nInside single parameter:";
}
int shownumber(int n1,int n2)
{
        cout<<"\nInside two parameter:";
}
int main()
{
        shownumber();
        shownumber(112);
        shownumber(12,13);
        return 0;


}
