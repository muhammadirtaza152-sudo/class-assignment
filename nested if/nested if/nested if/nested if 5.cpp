#include <iostream>
using namespace std;

int main() {
    int age, weight;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18 && age <= 65) {
        cout << "Enter your weight (in kg): ";
        cin >> weight;
        
        if (weight >= 50) {
            cout << "You are eligible to donate blood." << endl;
        } else {
            cout << "Not eligible. Weight must be at least 50kg." << endl;
        }
    } else {
        cout << "Not eligible. Age must be between 18 and 65." << endl;
    }
    return 0;
}
