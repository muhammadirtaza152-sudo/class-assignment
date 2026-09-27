#include <iostream>
using namespace std;

int main() {
    string name;
    char card;
    double attendance;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Do you have your student card? (y/n): ";
    cin >> card;

    cout << "Enter attendance percentage: ";
    cin >> attendance;

    if (card == 'y' && attendance >= 75) {
        cout << name << " is allowed to enter the examination hall.";
    }
    else {
        cout << name << " is NOT allowed to enter the examination hall.";
    }

    return 0;
}