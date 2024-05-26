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
    time addtime(time t1,time t2,time t3);
};
time  time ::addtime(time t1,time t2,time t3)
    {
        
        t3.sec=t1.sec+t2.sec;
        t3.min=t1.min+t2.min;
        t3.hr=t1.hr+t2.hr;
        int seconds=t3.sec;
        if(t3.sec>=60)
        {
            t3.sec=t3.sec%60;;
            t3.min=t3.min+seconds/60;
        }
        int minutes=t3.min;
        if(t3.min>=60)       
        {   t3.min=t3.min%60;
            t3.hr=t3.hr+minutes/60;

        }
        
        return t3;
        

    }
   

int main()
{
    time t1,t2,t3,t4,t5;
    cout<<"*************ENTER THE TIME****************"<<endl;
    t1.getData();
    t1.setData();


    cout<<"*************ENTER THE TIME****************"<<endl;
    t2.getData();
    t2.setData();

    t5=t4.addtime(t1,t2,t3);
    t5.setData();
    return 0;

    

}
