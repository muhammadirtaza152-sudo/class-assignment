#include <iostream>
using namespace std;

int main() {
    int battery;

    cout << "Enter battery percentage: ";
    cin >> battery;

    if (battery >= 80) {
        cout << "Battery: Excellent";
    }
    else if (battery >= 50) {
        cout << "Battery: Good";
    }
    else if (battery >= 20) {
        cout << "Battery: Low";
    }
    else if (battery > 0) {
        cout << "Battery: Critical";
    }
    else {
        cout << "Phone is switched off";
    }

    return 0;
}