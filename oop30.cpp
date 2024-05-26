#include<iostream>
using namespace std;
template <class T>
void func1(T n)
{
    cout<<"inside Template function:"<<n<<endl;
}
template<>
void func1(int n)
{
    cout<<"inside normal function:"<<n<<endl;
}

int main()
{   
    func1<int>(12);
    func1<float>(2.4);
    func1<string>("Shubhangi");
    return 0;
}