#include <iostream>
using namespace std;

int main() {
    double amount, discount, finalAmount;

    cout << "Enter order amount: ";
    cin >> amount;

    if (amount >= 50000) {
        discount = amount * 0.30;
    }
    else if (amount >= 30000) {
        discount = amount * 0.20;
    }
    else if (amount >= 15000) {
        discount = amount * 0.15;
    }
    else if (amount >= 5000) {
        discount = amount * 0.10;
    }
    else {
        discount = 0;
    }

    finalAmount = amount - discount;

    cout << "Discount: Rs. " << discount << endl;
    cout << "Final Amount: Rs. " << finalAmount;

    return 0;
}