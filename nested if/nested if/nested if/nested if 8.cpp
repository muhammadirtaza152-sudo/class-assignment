#include <iostream>
using namespace std;

int main() {
    int age;
    char is_student;
    int ticket_price = 500;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 12) {
        cout << "Child discount applied. Ticket price: 250" << endl;
    } else {
        cout << "Are you a student? (Y/N): ";
        cin >> is_student;
        
        if (is_student == 'Y' || is_student == 'y') {
            cout << "Student discount applied. Ticket price: 350" << endl;
        } else {
            if (age >= 60) {
                cout << "Senior citizen discount applied. Ticket price: 300" << endl;
            } else {
                cout << "Standard ticket price: " << ticket_price << endl;
            }
        }
    }
    return 0;
}
