#include <iostream>
using namespace std;

int main() {
    double percentage;

    cout << "Enter student percentage: ";
    cin >> percentage;

    if (percentage >= 90) {
        cout << "100% Scholarship";
    }
    else if (percentage >= 80) {
        cout << "75% Scholarship";
    }
    else if (percentage >= 70) {
        cout << "50% Scholarship";
    }
    else if (percentage >= 60) {
        cout << "25% Scholarship";
    }
    else {
        cout << "No Scholarship";
    }

    return 0;
}