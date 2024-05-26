#include<iostream>
using namespace std;
template <class T,class U>
void fun(T no1,U no2)
{
    cout<<"First Parameter:"<<no1<<endl;
    cout<<"Second parameter:"<<no2<<endl;
}
int main()
{
    fun<int,float>(2,4.5);
    fun<string,int>("Shubhangi",50);
    fun<string,string>("hello","MET BKC");
    return 0;
}
