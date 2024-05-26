#include<iostream>
#include<string.h>
using namespace std;
class student 
{
  public:
  int roll;
  char name[10];
  static string Class;

  void getdata()
  {
    cout<<"enter the name:";
    cin>>name;
    cout<<"enter the roll:";
    cin>>roll;
    
  }
  void showdata()
  {
    cout<<"name:"<<name<<endl;
    cout<<"roll:"<<roll<<endl;
    cout<<"Class:"<<Class;
  }
};
string student::Class="SE";
int main()
{
  student stud[5];
  int n;
  cout<<"enter how many records you want to insert:";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    stud[i].getdata();
  }
  for(int i=0;i<n;i++)
  {
    stud[i].showdata();
  }
  return 0;
}