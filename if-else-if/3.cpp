#include <iostream>
using namespace std;

int main() {
    int units;
    double bill;

    cout << "Enter electricity units: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 10;
    }
    else if (units <= 200) {
        bill = units * 15;
    }
    else if (units <= 300) {
        bill = units * 20;
    }
    else {
        bill = units * 30;
    }

    cout << "Electricity Bill: Rs. " << bill;

    return 0;
}