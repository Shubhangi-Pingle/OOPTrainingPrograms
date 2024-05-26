#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char data[100];
    char data2[100];
    ofstream out;
    out.open("myfile.txt",ios::app);
    cout<<"Writing to the file:"<<endl;

    cout<<"Enter the name:"<<endl;
    cin.getline(data,100);
    out<<data<<endl;
    cout<<"Enter phone Number:"<<endl;
    cin.getline(data,100);
    out<<data<<endl;
    out.close();
    
    return 0;

    
}