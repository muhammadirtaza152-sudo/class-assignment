#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;

    if (num != 0) {
        if (num > 0) {
            if (num % 2 == 0) {
                cout << "The number is Positive and Even." << endl;
            } else {
                cout << "The number is Positive and Odd." << endl;
            }
        } else {
            if (num % 2 == 0) {
                cout << "The number is Negative and Even." << endl;
            } else {
                cout << "The number is Negative and Odd." << endl;
            }
        }
    } else {
        cout << "The number is Zero." << endl;
    }
    return 0;
}
