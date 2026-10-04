#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (op == '/' || op == '*') {
        if (op == '/') {
            if (num2 != 0.0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
        } else {
            cout << "Result: " << num1 * num2 << endl;
        }
    } else {
        if (op == '+') {
            cout << "Result: " << num1 + num2 << endl;
        } else if (op == '-') {
            cout << "Result: " << num1 - num2 << endl;
        } else {
            cout << "Invalid Operator entered!" << endl;
        }
    }
    return 0;
}
