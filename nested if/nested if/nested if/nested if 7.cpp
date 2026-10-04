#include <iostream>
using namespace std;

int main() {
    int saved_pin = 1234;
    int saved_id = 999;
    int input_id, input_pin;

    cout << "Enter User ID: ";
    cin >> input_id;

    if (input_id == saved_id) {
        cout << "Enter 4-digit PIN: ";
        cin >> input_pin;
        
        if (input_pin == saved_pin) {
            cout << "Login Successful! Welcome to your dashboard." << endl;
        } else {
            cout << "Login Failed. Incorrect PIN." << endl;
        }
    } else {
        cout << "Login Failed. User ID not found." << endl;
    }
    return 0;
}
