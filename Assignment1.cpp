#include<iostream>
using namespace std;
class student 
{
    public:
    int m1,m2,m3,m4,m5;
    int total_marks;
    float height;
    int weight;
    char ans;
    
    void getdata()
    {
        cout<<"enter the student's five subject marks:";
        cin>>m1>>m2>>m3>>m4>>m5;
        total_marks=m1+m2+m3+m4+m5;
        
        cout<<"enter the height of the student:";
        cin>>height;
        cout<<"enter the weight of the student:";
        cin>>weight;
    }
   
        
        
    
    void showdata()
    {
        cout<<"Total marks of student:"<<total_marks<<endl;
        cout<<"height of the student:"<<height<<endl;
        cout<<"weight of the student:"<<weight<<endl;

    }
};
int main()
{
    student stud1,stud2;
    char ans;
    stud1.getdata();
    
    stud1.showdata();
    stud2.getdata();
    
    stud2.showdata();

    int ch;
    do
    {
    cout<<"enter the choice:"<<endl;
        cin>>ch;
    
    switch(ch)
    {
        
        case 1:if(stud1.total_marks>stud2.total_marks)
            cout<<"marks of student 1 is greater than student 2:"<<endl;
            else 
            cout<<"marks of student 2 is greater than marks of student 1"<<endl;
            break;
        case 2:if(stud1.height>stud2.height)
            cout<<"height of student 1 is greater than student 2:"<<endl;
             else 
            cout<<"height of student 2 is greater than marks of student 1"<<endl;
            break;
        case 3:
                if(stud1.weight>stud2.weight)
            cout<<"weight of student 1 is greater than student 2:"<<endl;
             else 
            cout<<"weight of student 2 is greater than marks of student 1"<<endl;
            break;
        default:cout<<"wrong choice:"<<endl;

    }
    cout<<"do you want to continue:";
        cin>>ans;
    }
    while (ans=='y');

    return 0;
}