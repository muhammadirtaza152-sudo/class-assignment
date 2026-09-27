#include <iostream>
using namespace std;

int main() {
    int roomType;

    cout << "Enter room type: ";
    cin >> roomType;

    if (roomType == 1) {
        cout << "Single Room Fee: Rs. 120000";
    }
    else if (roomType == 2) {
        cout << "Double Room Fee: Rs. 90000";
    }
    else if (roomType == 3) {
        cout << "Triple Room Fee: Rs. 70000";
    }
    else {
        cout << "Invalid Room Type";
    }

    return 0;
}