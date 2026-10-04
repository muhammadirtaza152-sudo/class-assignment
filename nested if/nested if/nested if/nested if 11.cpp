#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter X and Y coordinates: ";
    cin >> x >> y;

    if (x > 0) {
        if (y > 0) {
            cout << "Point lies in the First Quadrant." << endl;
        } else {
            cout << "Point lies in the Fourth Quadrant." << endl;
        }
    } else if (x < 0) {
        if (y > 0) {
            cout << "Point lies in the Second Quadrant." << endl;
        } else {
            cout << "Point lies in the Third Quadrant." << endl;
        }
    } else {
        cout << "Point is at the Origin or on the Axes." << endl;
    }
    return 0;
}
