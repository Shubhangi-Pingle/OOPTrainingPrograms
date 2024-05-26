#include <iostream>
using namespace std;
class currency
{private:
    int rupees;

    int paisa;
public:
    void set(int r,int p)
    {rupees=r;
    paisa=p;
    }
    void cal();
    void show();


    friend currency add(currency,currency);

};

void currency::cal()
{
    int add=rupees+paisa;

}
void currency::show()
{
    cout<<"the rupees "<<rupees;
    cout<<"paisa:"<<paisa;

}

currency add(currency c1,currency c2)
{
currency c3;
c3.rupees=c1.rupees + c2.rupees;
c3.paisa=c1.paisa + c2.paisa;
c3.rupees=c3.rupees + c3.paisa / 100;
c3.paisa=c3.paisa % 100;
return c3;

}
int main( )
{currency c3;
currency c1;
currency c2;

    int r,p;
    c1.set(10,60);
    c2.set(20,80);
    c3=add(c1,c2);
    c3.show();
    return 0;

}