#include <iostream>
using namespace std;
int main() {
    char vehicle, weekend, ev, member;
    int hours, entryTime;
    double bill;

    cout << "Vehicle (B=Bike, C=Car, S=SUV): ";
    cin >> vehicle;
    cout << "Parking hours: ";
    cin >> hours;
    cout << "Weekend? (Y/N): ";
    cin >> weekend;
    cout << "Electric Vehicle? (Y/N): ";
    cin >> ev;
    cout << "Member? (Y/N): ";
    cin >> member;
    cout << "Entry time (0-23): ";
    cin >> entryTime;
    if (vehicle == 'B') {
        bill = hours * 50;
    }
    else {
        if (vehicle == 'C') {
            bill = hours * 100;
        }
        else {
            bill = hours * 150;
        }
    }

    if (hours > 5) {
        bill = bill + bill * 0.20;
    }
    else {
        bill = bill;
    }

    if (weekend == 'Y') {
        bill = bill + bill * 0.30;
    }
    else {
        bill = bill;
    }

    if (member == 'Y') {
        bill = bill - bill * 0.15;
    }
    else {
        bill = bill;
    }

    if (ev == 'Y') {
        if (member == 'Y') {
            if (bill > 500) {
                bill = bill - 500;
            }
            else {
                bill = 0;
            }
        }
        else {
            bill = bill - 100;
        }
    }
    else {
        bill = bill;
    }

    if (entryTime >= 22) {
        bill = bill + bill * 0.10;
    }
    else {
        bill = bill;
    }
    cout << "Final Parking Bill = Rs. " << bill << endl;

    return 0;
}
