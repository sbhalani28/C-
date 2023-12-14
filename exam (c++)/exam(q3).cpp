#include<iostream>
using namespace std;
#include<iomanip>
#include<set>

class bank
{
    char name[20];
    int accno;
    char acctype[20];
    int bal;
   

    public:
    void opbal(void);
    void deposit(void);
    void withdraw(void);
    void display(void);
};

void bank::opbal(void)
{
    cout<<endl<<endl;
    cout<<"enter name:-\t";
    cin>>name;
    cout<<"enter Acc.no:-\t";
    cin>>accno;
    cout<<"enter acc.type:-\t";
    cin>>acctype;
    cout<<"enter opening balance:-\t";
    cin>>bal;
}
void bank :: deposit(void)
{
    int deposit=0;
    cout<<"enter deposit amount:-\t";
    cin>>deposit;
    bal=deposit+bal;
    cout<<"\n deposit balance=\t"<<bal;

}
void bank::withdraw(void)
{
    int withdraw;
    cout<<"\n balance amount=\t\t"<<bal;
    cout<<"\n enter withdraw amount:-\t";
    cin>>withdraw;

    if(bal>withdraw)
    {
        bal=bal-withdraw;
        cout<<"\nafter withdraw balance:-\t"<<bal;


    }
    else{
        cout<<"\n\t!!! not enough balance!!!";
    }
}

void bank::display(void)
{
    cout<<endl<<endl<<endl;
    cout<<setw(50)<<"details"<<endl;
    cout<<setw(50)<<"name"<<name<<endl;
    cout<<set(50)<<"acc. no"<<bal<<endl;


}

int main()
{
    bank o1;
    int choice;

    do{
        cout<<"---banking system---";
        cout<<"\n\n choice list \n\n";
        cout<<"1) assign initial value\n";
        cout<<"2) to deposit\n";
        cout<<"3) to withdraw\n";
        cout<<"4) to display all details\n";
        cout<<"5) exit\n";
        cout<<"enter your choice:-";
        cin>>choice;

        switch(choice)
        {
            case 1: o1.opbal();
            break;

            case 2: o1.deposit();
            break;

            case 3: o1.withdraw();
            break;

            case 4: o1.display();
            break;

            case 5: goto end;

            default:cout<<"\ninvalid choice";
        }



    };
}
