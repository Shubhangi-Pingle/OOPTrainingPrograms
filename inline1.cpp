#include<iostream>
using namespace std;
class Rectangle
{

        public:
        int l,b;
        int area;
        inline void showdata(int l,int b);
       
};
void Rectangle::showdata(int l,int b)
 {
                area=l*b;
                cout<<area;
}

int main()
{
    Rectangle r;
    r.showdata(2,3);
}