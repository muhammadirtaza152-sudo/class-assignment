#include <iostream>
using namespace std;
int main() {
    double distance, fare;
    int age;
    char classType, weekend, student, returning;
    cout << "Distance (km): ";
    cin >> distance;
    cout << "Age: ";
    cin >> age;
    cout << "Class (E=Economy, B=Business, F=First): ";
    cin >> classType;
    cout << "Weekend? (Y/N): ";
    cin >> weekend;
    cout << "Student? (Y/N): ";
    cin >> student;
    cout << "Return Ticket? (Y/N): ";
    cin >> returning;
    
    fare = distance * 5;

    if (classType == 'B') {
        fare = fare * 1.5;
    }
    else {
        if (classType == 'F') {
            fare = fare * 2;
        }
        else {
            fare = fare;
        }
    }
    if (age < 12) {
        fare = fare - fare * 0.50;
    }
    else {
        if (age >= 60) {
            fare = fare - fare * 0.30;
        }
        else {
            if (student == 'Y') {
                fare = fare - fare * 0.20;
            }
            else {
                fare = fare;
            }
        }
    }
    if (returning == 'Y') {
        fare = fare + fare * 0.10;
    }
    else {
        fare = fare;
    }
    if (weekend == 'Y') {
        fare = fare + fare * 0.15;
    }
    else {
        fare = fare;
    }
    cout << "Final Ticket Fare = Rs. " << fare << endl;

    return 0;
}
