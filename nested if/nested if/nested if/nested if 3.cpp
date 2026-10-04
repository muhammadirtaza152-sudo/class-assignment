#include <iostream>
using namespace std;

int main() {
    char gender;
    int age;

    cout << "Enter gender (M/F): ";
    cin >> gender;
    cout << "Enter age: ";
    cin >> age;

    if (gender == 'M' || gender == 'm') {
        if (age >= 21) {
            cout << "Eligible for marriage." << endl;
        } else {
            cout << "Not eligible. Minimum age for Male is 21." << endl;
        }
    } else if (gender == 'F' || gender == 'f') {
        if (age >= 18) {
            cout << "Eligible for marriage." << endl;
        } else {
            cout << "Not eligible. Minimum age for Female is 18." << endl;
        }
    } else {
        cout << "Invalid gender input." << endl;
    }
    return 0;
}
