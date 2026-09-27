#include <iostream>
using namespace std;

int main() {
    string name;
    int marks;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50) {
        cout << name << " has Passed";
    }
    else {
        cout << name << " has Failed";
    }

    return 0;
}