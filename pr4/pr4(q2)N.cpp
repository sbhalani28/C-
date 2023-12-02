#include<iostream>
using namespace std;
class billing
{
    public:
    int userid,password;
    
    
    void createAc()
    {
    cout<<"Enter the userid :-"<<endl;
    cin >>userid;
    cout<<"Enter the password:-";
    cin >>password; 
    }
    void product()
    {
        int itemno,qty,discount=10,pen=10,notebook=40,coffee=40,tea=500,id,pass;
        float tax=5,total,finaltotal;
        char name[50];
        int choice;

        cout<<"Press 1 for pen"<<endl;
        cout<<"Press 2 for notebook"<<endl;
        cout<<"Press 3 for coffee"<<endl;
        cout<<"Press 4 for tea"<<endl;
        cout<<"Press 5 for exit"<<endl;
        cout<<"Enter your choice";
        cin >>choice;

        switch(choice)
        {
            case 1:
             cout<<"Enter the userid :-"<<endl;
             cin >>id;
             cout<<"Enter the password:-";
             cin >>pass;

             if(userid==id && password==pass)
             {
                cout<<"Enter the Item number:-"<<endl;
                cin>>itemno;
                cout<<"Enter the Item quantity:-"<<endl;
                cin>>qty;

                if(qty>3)
                {
                    cout<<"Item no :-"<<itemno<<endl;
                    cout<<"Item qty :-"<<qty<<endl;
                    cout<<"Discount:-"<<discount<<endl;
                    total = pen * qty;
                    cout<<"Total :-"<<total<<endl;
                    finaltotal = total-(discount/100)+(tax/100);
                    cout<<"finaltotal :-"<<finaltotal<<endl;
                    break;
                }
             }
                    
            case 2:
             cout<<"Enter the userid :-"<<endl;
             cin >>id;
             cout<<"Enter the password:-";
             cin >>pass;

             if(userid==id && password==pass)
             {
                cout<<"Enter the Item number:-"<<endl;
                cin>>itemno;
                cout<<"Enter the Item quantity:-"<<endl;
                cin>>qty;

                if(qty>3)
                {
                    cout<<"Item no :-"<<itemno<<endl;
                    cout<<"Item qty :-"<<qty<<endl;
                    cout<<"Discount:-"<<discount<<endl;
                    total= notebook * qty;
                    cout<<"Total :-"<<total<<endl;
                    finaltotal = total-(total*discount/100)+(total*tax/100);
                    cout<<"finaltotal :-"<<finaltotal<<endl;
                    break;
                }
             }
             case 3:
             cout<<"Enter the userid :-"<<endl;
             cin >>id;
             cout<<"Enter the password:-";
             cin >>pass;

             if(userid==id && password==pass)
             {
                cout<<"Enter the Item number:-"<<endl;
                cin>>itemno;
                cout<<"Enter the Item quantity:-"<<endl;
                cin>>qty;

                if(qty>3)
                {
                    cout<<"Item no :-"<<itemno<<endl;
                    cout<<"Item qty :-"<<qty<<endl;
                    cout<<"Discount:-"<<discount<<endl;
                    total = coffee * qty;
                    cout<<"Total :-"<<total<<endl;
                    finaltotal = total-(discount/100)+(tax/100);
                    cout<<"finaltotal :-"<<finaltotal<<endl;
                    break;
                }
             }
                
                
             case 4:
             cout<<"Enter the userid :-"<<endl;
             cin >>id;
             cout<<"Enter the password:-";
             cin >>pass;

             if(userid==id && password==pass)
             {
                cout<<"Enter the Item number:-"<<endl;
                cin>>itemno;
                cout<<"Enter the Item quantity:-"<<endl;
                cin>>qty;

                if(qty>3)
                {
                    cout<<"Item no :-"<<itemno<<endl;
                    cout<<"Item qty :-"<<qty<<endl;
                    cout<<"Discount:-"<<discount<<endl;
                    total = tea * qty;
                    cout<<"Total :-"<<total<<endl;
                    finaltotal = total-(discount/100)+(tax/100);
                    cout<<"finaltotal :-"<<finaltotal<<endl;
                    
                      }
             } 
             else
             {
                cout<<"Invalid user id and password ";
             }
             break;
        }
    }
    

};

int main()
{
    billing b;
    b.createAc();
    b.product();
}