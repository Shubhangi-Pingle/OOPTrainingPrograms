#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in;
    char data[100];
    in.open("myfile.txt");
    

    in>>data;
    cout<<data<<endl;
    in>>data;
    cout<<data<<endl;
    in.close();
    return 0;
}