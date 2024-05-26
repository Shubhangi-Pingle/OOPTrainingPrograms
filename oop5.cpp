#include<iostream>
using namespace std;
class time 
{
    private:
    int hr;
    int min;
    int sec;
   
    public:
    void getData()
    {
        cout<<"enter the hours:";
        cin>>hr;
        cout<<"enter the minute:";
        cin>>min;
        cout<<"enter the seconds:";
        cin>>sec;
    }
    void setData()
    {   cout<<"hours:"<<hr<<endl;
        cout<<"minute:"<<min<<endl;
        cout<<"seconds:"<<sec<<endl;

    }
    time addtime(time t1,time t2);
};
time  time ::addtime(time t1,time t2)
    {
        
        sec=t1.sec+t2.sec;
        min=t1.min+t2.min;
        hr=t1.hr+t2.hr;
        int seconds=sec;
        if(sec>=60)
        {
            sec=sec%60;;
            min=min+seconds/60;
        }
        int minutes=min;
        if(min>=60)       
        {   min=min%60;
            hr=hr+minutes/60;

        }
        
        
        

    }
   

int main()
{
    time t1,t2,t3;
    cout<<"*************ENTER THE TIME****************"<<endl;
    t1.getData();
    t1.setData();


    cout<<"*************ENTER THE TIME****************"<<endl;
    t2.getData();
    t2.setData();

    t3.addtime(t1,t2);
    t3.setData();
    return 0;

    

}
