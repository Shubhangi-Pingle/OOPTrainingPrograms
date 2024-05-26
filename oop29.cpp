#include<iostream>
using namespace std;
template<class T>
class example 
{
    public:
    T x;
    
    T getNumber( );
    
   
    void showNumber()
    {
        cout<<"X="<<x<<endl;
    }
};
template<class T>
T example<T>::getNumber()
{      
    cout<<"enter a number";
    cin>>x;

}
int main()
{
   
   example<int>obj;
   obj.getNumber();
   obj.showNumber();

    return 0;



}