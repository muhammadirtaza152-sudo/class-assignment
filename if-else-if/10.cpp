#include <iostream>
using namespace std;

int main() {

    string name;
    double salary, performance, attendance;
    int experience;

    cout << "===== EMPLOYEE SALARY SYSTEM =====" << endl;

    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter monthly salary: ";
    cin >> salary;

    cout << "Enter years of experience: ";
    cin >> experience;

    cout << "Enter performance percentage: ";
    cin >> performance;

    cout << "Enter attendance percentage: ";
    cin >> attendance;
    if (salary <= 0 || experience < 0 ||
        performance < 0 || performance > 100 ||
        attendance < 0 || attendance > 100) {

        cout << "\nInvalid information entered!";
    }

    else {

        double bonus = 0;
        if (performance >= 90) {
            bonus = salary * 0.20;
        }
        else if (performance >= 80) {
            bonus = salary * 0.15;
        }
        else if (performance >= 70) {
            bonus = salary * 0.10;
        }
        else if (performance >= 60) {
            bonus = salary * 0.05;
        }
        else {
            bonus = 0;
        }

        if (attendance < 75) {
            bonus = 0;
        }

        if (experience >= 10) {
            bonus = bonus + salary * 0.10;
        }
        else if (experience >= 5) {
            bonus = bonus + salary * 0.05;
        }

        double totalSalary = salary + bonus;

        cout << "\n===== EMPLOYEE REPORT =====" << endl;

        cout << "Employee: " << name << endl;
        cout << "Basic Salary: Rs. " << salary << endl;
        cout << "Performance: " << performance << "%" << endl;
        cout << "Attendance: " << attendance << "%" << endl;
        cout << "Experience: " << experience << " years" << endl;

        cout << "Bonus: Rs. " << bonus << endl;
        cout << "Total Salary: Rs. " << totalSalary << endl;

        // Employee category
        if (performance >= 90 && attendance >= 90) {
            cout << "Employee Status: Outstanding";
        }
        else if (performance >= 80 && attendance >= 80) {
            cout << "Employee Status: Excellent";
        }
        else if (performance >= 70 && attendance >= 75) {
            cout << "Employee Status: Good";
        }
        else if (performance >= 60) {
            cout << "Employee Status: Average";
        }
        else {
            cout << "Employee Status: Needs Improvement";
        }
    }

    return 0;
}