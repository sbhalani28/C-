#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int yearofjoining;
    string address;
   int salary;
public:

    Employee(const string& empname, int joinYear, const string& empaddress, int salary)
        : name(empname), yearofjoining(joinYear), address(empaddress),salary(salary){}


    void displayInfo() const {
        cout << "name :- " << name << endl;
        cout << "year of Joining :- " << yearofjoining << endl;
        cout << "address :- " << address << endl << endl;
        cout<<"salary:-"<<salary<<endl<<endl;
    }
};

int main() {
    
    Employee emp1("Robert", 1994, " 64C- WallsStreat",1000);
    Employee emp2("Sam", 2000, "68D- WallsStreat",2000);
    Employee emp3("John", 1999, "26B- WallsStreat",3000);

    cout << "employee information:" << endl;
    
    emp1.displayInfo();
    emp2.displayInfo();
    emp3.displayInfo();

}
