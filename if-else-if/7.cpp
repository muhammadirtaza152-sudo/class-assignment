#include <iostream>
using namespace std;

int main() {
    double distance;

    cout << "Enter delivery distance in KM: ";
    cin >> distance;

    if (distance <= 5) {
        cout << "Delivery Charges: Rs. 100";
    }
    else if (distance <= 10) {
        cout << "Delivery Charges: Rs. 200";
    }
    else if (distance <= 20) {
        cout << "Delivery Charges: Rs. 400";
    }
    else if (distance <= 50) {
        cout << "Delivery Charges: Rs. 700";
    }
    else {
        cout << "Delivery not available";
    }

    return 0;
}