#include <iostream>
using namespace std;

int main() {
    double percentage;

    cout << "Enter percentage: ";
    cin >> percentage;

    if (percentage >= 80) {
        cout << "Admission Category: Excellent";
    }
    else if (percentage >= 70) {
        cout << "Admission Category: Very Good";
    }
    else if (percentage >= 60) {
        cout << "Admission Category: Good";
    }
    else if (percentage >= 50) {
        cout << "Admission Category: Average";
    }
    else {
        cout << "Not Eligible for Admission";
    }

    return 0;
}
