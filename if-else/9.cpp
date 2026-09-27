#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    char city;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Are you from another city? (y/n): ";
    cin >> city;

    if (age >= 18 && city == 'y') {
        cout << name << " is eligible for hostel";
    }
    else {
        cout << name << " is not eligible for hostel";
    }

    return 0;
}