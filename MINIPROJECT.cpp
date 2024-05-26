#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Bank
{
    public:
        virtual void Deposite()=0;
        virtual void Withdraw()=0;

};


class SBI:public Bank
{
    public:
        static int accNo;

        static void getAccountNo()
        {
            accNo++;
            cout<<"\nAccount Number:"<<accNo;
        }

        int Bal=0;
        SBI()
        {
            cout<<"\nWelcome to Apna Bank....  :)";
        }

};


class Human
{
    protected:
        char name[20];
        char aadharNo[13];
        char mobNo[11];
        char accType[20];
        int age;


};


class person: public Human
{
    public:
        void getName()
        {
            cout<<"\nEnter your name:";
            cin>>name;
        }

        void showName()
        {
            cout<<"\nName:"<<name;
        }

        void getAadharNo()
        {
            cout<<"\nEnter your aadhar number:";
            cin>>aadharNo;
            while(strlen(aadharNo)!=12)
            {
                cout<<"\nInvalid Aadhar Number";
                getAadharNo();
                break;
            }
        }

        void showAadharNo()
        {
            cout<<"\nAadhar Number:"<<aadharNo;
        }

        void getMobNo()
        {
            cout<<"\nEnter your Mobile Number:";
            cin>>mobNo;

        while(strlen(mobNo)!=10)
        {
            cout<<"\nInvalid Mobile Number";
            getMobNo();
            break;
        }

        }

        void showMobNo()
        {

            cout<<"\nMobile Number:"<<mobNo;
        }

        void getAccType()
        {
            cout<<"\nEnter your account type:";
            cin>>accType;
        }

        void showAccType()
        {
            cout<<"\nAccount Type:"<<accType;
        }
        void getAge()
        {
            cout<<"\nEnter your age:";
            cin>>age;
        }

        void showAge()
        {
            cout<<"\nAge:"<<age;
        }

};


class Account: public SBI, public person
{
    public:
        int dAmt,wAmt;

        void Deposite()
        {
            cout<<"\nEnter amount to be deposite:";
            cin>>dAmt;

            Bal=Bal+dAmt;
            cout<<"\nYour available balance is:"<<Bal;
        }

        void Withdraw()
        {
            cout<<"\nEnter amount to be withdraw:";
            cin>>wAmt;

        try
        {
            if(Bal<wAmt)
            {
                throw Bal;
            }
            else
            {
                Bal=Bal-wAmt;
            }
        }
        catch(int Bal)
        {
            cout<<"\nYour Balance is not sufficient";
        }
        }

        void showBal()
        {
            cout<<"\nBalance:"<<Bal;
        }
};

int SBI::accNo=157755;

int main()
{
        int ch,n;
        char ans;
        person P;
        Account A;


do
{
        cout<<"\n***************************MENU****************************";
        cout<<"\n\t1. Get Details\n\t2. Deposite\n\t3. Withdraw\n\t4. Show Details";
        cout<<"\nEnter Your Choice:";
        cin>>ch;

        switch(ch)
        {
        case 1:
                P.getName();
                P.getAadharNo();
                P.getMobNo();
                P.getAccType();
                P.getAge();


                break;

        case 2:
                A.Deposite();
                break;

        case 3:
                A.Withdraw();
                break;

        case 4:
                P.showName();
                P.showAadharNo();
                P.showMobNo();
                P.showAccType();
                P.showAge();
                A.showBal();
                SBI::getAccountNo();
                break;
        default:
                cout<<"\nPlease check your choice...!!!";
        }
                cout<<"\nDo you want to continue?(Y/N)";
                cin>>ans;
}
        while(ans=='Y');
        cout<<"\nThank You 🙏️";

        

        return 0;
}



















