#include <iostream>
#include <string>

// Base class for Employee information
class EmployeeInfo {
protected:
    std::string emp_name;
    std::string emp_email;
    std::string emp_password;
    std::string emp_contact;
    std::string emp_city;

public:
    // Function to read employee information
    void readEmployeeInfo() {
        std::cout << "Enter Employee Name: ";
        std::getline(std::cin, emp_name);

        std::cout << "Enter Employee Email: ";
        std::getline(std::cin, emp_email);

        std::cout << "Enter Employee Password: ";
        std::getline(std::cin, emp_password);

        std::cout << "Enter Employee Contact: ";
        std::getline(std::cin, emp_contact);

        std::cout << "Enter Employee City: ";
        std::getline(std::cin, emp_city);
    }
};

// Another base class for Employee role
class EmployeeRole {
protected:
    std::string emp_role;

public:
    // Function to read employee role
    void readEmployeeRole() {
        std::cout << "Enter Employee Role: ";
        std::getline(std::cin, emp_role);
    }
};

// Derived class using multiple inheritance
class Employee : public EmployeeInfo, public EmployeeRole {
public:
    // Function to print employee information
    void printEmployeeInfo() {
        std::cout << "\nEmployee Information:\n";
        std::cout << "Name: " << emp_name << "\n";
        std::cout << "Email: " << emp_email << "\n";
        std::cout << "Password: " << emp_password << "\n";
        std::cout << "Contact: " << emp_contact << "\n";
        std::cout << "City: " << emp_city << "\n";
        std::cout << "Role: " << emp_role << "\n";
    }
};

int main() {
    // Create an Employee object
    Employee emp;

    // Read employee information using the base class methods
    emp.EmployeeInfo::readEmployeeInfo();
    emp.EmployeeRole::readEmployeeRole();

    // Print employee information using the derived class method
    emp.printEmployeeInfo();

    return 0;
}
