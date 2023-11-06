#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num; 

    
    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    
    if (originalNum == reversedNum) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }

    
    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}
