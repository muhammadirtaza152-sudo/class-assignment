#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 5 == 0) {
        if (num % 11 == 0) {
            cout << "Number is divisible by both 5 and 11." << endl;
        } else {
            cout << "Number is divisible by 5 but not by 11." << endl;
        }
    } else {
        if (num % 11 == 0) {
            cout << "Number is divisible by 11 but not by 5." << endl;
        } else {
            cout << "Number is neither divisible by 5 nor by 11." << endl;
        }
    }
    return 0;
}
