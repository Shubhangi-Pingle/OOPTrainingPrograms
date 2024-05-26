#include<iostream>
using namespace std;
class Newspaper
{
    public:
    char lang[10];
    int nopage;
    char scope[10];
    char publication[10];
    void getData();
    void showData();

};
void Newspaper::getData()
{
    cout<<"Enter the language:";
    cin>>lang;
    cout<<"Enter the no of pages:";
    cin>>nopage;
    cout<<"Enter the scope:";
    cin>>scope;
    cout<<"Enter the publication city:";
    cin>>publication;

}
void Newspaper::showData()
{
    cout<<"the language of newspaper:"<<lang<<endl;
    cout<<"the no of pages of newspaper:"<<nopage<<endl;
    cout<<"the scope of newspaper:"<<scope<<endl;
    cout<<"the publication city of newspaper:"<<publication<<endl;
}
int main()
{
    Newspaper sakal,TOI;
    sakal.getData();
    cout<<"\n ********DETAILS OF SAKAL NEWSPAPER********"<<endl;
    sakal.showData();
    TOI.getData();
    cout<<"\n ********DETAILS OF TIMES OF INDIA NEWSPAPER********"<<endl;
    TOI.showData();

    return 0;
}