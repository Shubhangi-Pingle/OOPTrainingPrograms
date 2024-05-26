#include<iostream>
using namespace std;
class Rectangle
{

        public:
        int l,b;
        int area;
        void showdata(int l,int b);
       
};
inline void Rectangle::showdata(int l,int b)
 {
                area=l*b;
                cout<<area;
}

int main()
{
    Rectangle r;
    r.showdata(2,3);
}