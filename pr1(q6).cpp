#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int a = 0, b = 1;
    int nextTerm;

    if (n >= 1) {
        cout << "Fibonacci Series: " << a;
    }
    if (n >= 2) {
        cout << ", " << b;
    }

    for (int i = 3; i <= n; i++) {
        nextTerm = a + b;
        cout << ", " << nextTerm;
        a = b;
        b = nextTerm;
    }

    cout << endl;
    
    return 0;
}
