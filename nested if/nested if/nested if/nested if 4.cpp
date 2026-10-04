#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks >= 50) {
        if (marks >= 90) {
            cout << "Passed with Grade: A" << endl;
        } else if (marks >= 75) {
            cout << "Passed with Grade: B" << endl;
        } else {
            cout << "Passed with Grade: C" << endl;
        }
    } else {
        if (marks >= 35) {
            cout << "Failed. Grade: D (Needs Improvement)" << endl;
        } else {
            cout << "Failed. Grade: F (Strict Remedial Required)" << endl;
        }
    }
    return 0;
}
