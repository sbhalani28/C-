#include <iostream>
using namespace std;
int main() {
    int costPrice, sellingPrice, profitorLoss;

    
    cout << "Enter the cost price: rs.";
    cin >> costPrice;

    
    cout << "Enter the selling price: rs.";
    cin >> sellingPrice;

    
    if (sellingPrice > costPrice) {
        profitorLoss = sellingPrice - costPrice;
        cout << "Profit: rs." << profitorLoss << endl;
    } else if (costPrice > sellingPrice) {
        profitorLoss = costPrice - sellingPrice;
        cout << "Loss: rs." << profitorLoss << endl;
    } else {
        cout << "No profit, no loss." << endl;
    }

    return 0;
}
