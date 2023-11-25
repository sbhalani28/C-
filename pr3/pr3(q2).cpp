#include<iostream>

using namespace std;
class Animal
{
    Public:
    string name;
    int age;

    public:
    void set_value(int a,string n)
    {
        age=a;
        name=n;
    }

};
class Zebra:public animal
{
    public:
    void displayzebraMessage()
    {
        cout<<"the Zebra name is:"<<name<<".the Zebra is:"<<age<<"years old"<<endl;

    }
};
class dolphin:public animal{
    public:
    void displaydolphinMesage()
    {cout<<"the dolphin name is:"<<name<<".the dolphin is "<<age<<"years old"<<endl;}

};
int main()

    {zebra zebra;
    dolphin dolphin;
    
    zebra.set_value(5,"Prachi");
    dolphin.set_value(2,"Shivani");
    
    zebra.displayzebraMessage();
    dolphin.displayDolphinMesage();
    
    return 0;
     }
