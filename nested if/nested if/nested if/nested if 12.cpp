#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three angles of a triangle: ";
    cin >> a >> b >> c;

    if (a + b + c == 180 && a > 0 && b > 0 && c > 0) {
        if (a == b && b == c) {
            cout << "Valid Triangle: Equilateral Triangle." << endl;
        } else {
            if (a == b || b == c || a == c) {
                cout << "Valid Triangle: Isosceles Triangle." << endl;
            } else {
                cout << "Valid Triangle: Scalene Triangle." << endl;
            }
        }
    } else {
        cout << "Invalid Triangle! Sum of angles must be exactly 180." << endl;
    }
    return 0;
}
