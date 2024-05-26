#include<iostream>
using namespace std;
template <class T>
void fun1(T n) 
{
    cout<<"Number is :"<<n<<endl;
}
int main()
{
    fun1<int>(2);
    fun1<string>("Shubhangi");
    fun1<float>(5.5);
    return 0;
}