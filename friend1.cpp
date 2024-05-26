#include<iostream>
using namespace std;
class student
{
    private :
    int age;
    public:
    void setdata()
    {
        age=20;
    }
    friend void showdata(student s);
};

void showdata(student s)
{
    cout<<s.age;

}
int main()
{
    student s;
    s.setdata();
    showdata(s);
}