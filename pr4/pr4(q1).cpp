#include<iostram>
using spacename std;
#define MAX 10

class student{
    private:
    char name[30];
    int id,std;
    char email[100];
    char hobby[30];
    char gender[10];


    public:

    void getdetails(void);
    void putdetails(void);
};

void student::getdetails(void)
{
    cout<<"Enter id:";
    cin>>id;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter standard:";
    cin>std;
    cout<<"Enter email:";
    cin>>email;
    cout<<"Enter gender:";
    cin>>gender;
    cout<<"hobby:";
    cin>>hobby;

    
}

void student::putdetails(void)
{
    cout<<"student details:\n";
    cout<<"id:"<<id<<endl<<"name:"<<name<<endl<<"standard :"<<standard<<std<<endl<<"Enter email:"<<email<<endl<<"Enter gender:"<<gender<<endl<<"hobby:"<<hobby<<endl;
    
}

int main()
{
    student std[MAX];
    int n,loop;

    cout <<"enter total number of students:-";
    cin>>n;

    for(loop=0;loop<n;loop++){
        cout<<"enter details of student: "<<loop+1<<":<<endl";
        std[loop].getdetails();
        
    }

    cout<<endl;

    for(loop=0; loop<n; loop++){
        cout<<"details of students"<<(loop+1)<<":<<endl";
        std[loop].putdetails();
    }
    return 0;
}