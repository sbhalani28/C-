#include <iostream>
using namespace std;
int main() {
    char dayInput;
    
    cout << "Enter the first letter of a day (M,T,W,t,F,S,s): ";
    cin >> dayInput;
    
    
    switch (dayInput) {
        case 'M':
            cout << "today is monday" << endl;
            break;
        case 'T':
            cout << "today is tuesday" << endl;
            break;
        case 'W':
            cout << "today is wednesday" << endl;
            break;
        case 't':
            cout << "today is thursday" << endl;
            break;
        case 'F':
            cout << "today is friday" << endl;
            break;
        case 'S':
            cout << "today is saturday" << endl;
            break;
        case 's':
            cout << "today is sunday" << endl;
            break;
        default:
            cout << "Invalid input. " <<endl;
            break;
    }
    
    return 0;
}
