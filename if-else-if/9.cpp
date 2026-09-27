#include <iostream>
using namespace std;

int main() {
    int heartRate;

    cout << "Enter heart rate: ";
    cin >> heartRate;

    if (heartRate > 120) {
        cout << "Priority: Emergency";
    }
    else if (heartRate > 100) {
        cout << "Priority: High";
    }
    else if (heartRate >= 60) {
        cout << "Priority: Normal";
    }
    else {
        cout << "Priority: Critical - Low Heart Rate";
    }

    return 0;
}