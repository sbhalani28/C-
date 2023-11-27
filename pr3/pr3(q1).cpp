#include<iostream>
using namespace std;
class mother {
    public:
    void display(){
        cout<<"hello daughter "<<endl;


    }

};
class daughter:public mother  {
    public:
    void display(){
        cout<<"hello mother "<<endl:

    }
};

int main(){
    daughter mydaughter;
       mydaughter.display();

       return 0;
    
}
