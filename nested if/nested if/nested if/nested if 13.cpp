#include <iostream>
using namespace std;

int main() {
    char degree;
    int experience;

    cout << "Do you have a Tech Degree? (Y/N): ";
    cin >> degree;

    if (degree == 'Y' || degree == 'y') {
        cout << "Enter years of experience: ";
        cin >> experience;
        
        if (experience >= 2) {
            cout << "Selected for the Interview round." << endl;
        } else {
            cout << "Rejected. Minimum 2 years of experience required for degree holders." << endl;
        }
    } else {
        cout << "Enter years of experience: ";
        cin >> experience;
        
        if (experience >= 5) {
            cout << "Selected for the Interview round based on high experience." << endl;
        } else {
            cout << "Rejected. Non-degree holders need at least 5 years of experience." << endl;
        }
    }
    return 0;
}
