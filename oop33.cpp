#include<iostream>
#include<fstream>
using namespace std;
int main()
{   char data[100];
    
    ifstream in;
    
    in.open("myfile.txt");
    cout<<"Reading from file:"<<endl;
    while(!in.eof())
    {

    in.getline(data,100);
    cout<<data<<endl;
    
    
    }   
    in.close();
    return 0;
}

