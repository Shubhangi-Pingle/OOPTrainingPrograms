#include<iostream>
using namespace std;
class Area
{
    public:
    int l,b;
    void setDin(int length,int breadth)
    {
        l=length;
        b=breadth;
    }
    int show()
    {
        return l*b;

    }
};
int main()
{
    int length,breadth;
    cin>>length;
    cin>>breadth;
    Area a1;
    a1.setDin(length,breadth);
    int b=a1.show();
    cout<<"Area:";
    cout<<b;
    return 0;

}