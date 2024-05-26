#include<iostream>
using namespace std;
template<class T>
class example 
{
    public:
    T x;
    example(T n)
    {
        x=n;
    }
    void showNumber()
    {
        cout<<"X="<<x<<endl;
    }
};
int main()
{
    example <int> obj(10);
    obj.showNumber();
    example<float>obj1(2.3);
    obj1.showNumber();
    example<string>obj2("Shubhangi");
    obj2.showNumber();
    return 0;



}