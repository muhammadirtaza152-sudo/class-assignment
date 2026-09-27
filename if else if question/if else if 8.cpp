#include <iostream>
using namespace std;
int main()
{
    float basicSalary, bonus, experienceBonus;
    float overtimePay, grossSalary, tax, netSalary;
    int years, employeeType , performance, overtimeHours;
    cout << "Basic Salary: ";
    cin >> basicSalary;
    cout << "Years of Service: ";
    cin >> years;
    cout << "Employee Type (1=Junior, 2=Senior, 3=Manager): ";
    cin >> employeeType;
    cout << "Performance (1=Poor, 2=Average, 3=Good, 4=Excellent): ";
    cin >> performance;
    cout << "Overtime Hours: ";
    cin >> overtimeHours;
    if (basicSalary <= 0)
        cout << "Invalid Salary";

    else if (years < 0)
        cout << "Invalid Experience";
    else if (employeeType < 1 || employeeType > 3)
        cout << "Invalid Employee Type";
    else if (performance < 1 || performance > 4)
        cout << "Invalid Performance";

    else if (overtimeHours < 0)
        cout << "Invalid Overtime";

    else
    {
        if (performance == 1)
            bonus = 0;
        else if (performance == 2)
            bonus = basicSalary * 0.05;
        else if (performance == 3)
            bonus = basicSalary * 0.10;
        else
            bonus = basicSalary * 0.20;

        if (performance == 1 && years > 10)
            experienceBonus = 0;
        else if (years > 10)
            experienceBonus = basicSalary * 0.15;
        else if (years >= 6)
            experienceBonus = basicSalary * 0.10;
        else if (years >= 2)
            experienceBonus = basicSalary * 0.05;
        else
            experienceBonus = 0;

        if (employeeType == 1)
            overtimePay = overtimeHours * 500;
        else if (employeeType == 2)
            overtimePay = overtimeHours * 800;
        else
            overtimePay = overtimeHours * 1200;

        grossSalary = basicSalary +
                      bonus +
                      experienceBonus +
                      overtimePay;
                      
        if (grossSalary < 50000)
            tax = 0;
        else if (grossSalary <= 100000)
            tax = grossSalary * 0.05;
        else if (grossSalary <= 200000)
            tax = grossSalary * 0.10;
        else
            tax = grossSalary * 0.15;

        netSalary = grossSalary - tax;

        cout << "Performance Bonus = " << bonus << endl;

        cout << "Experience Bonus = "
             << experienceBonus << endl;
        cout << "Overtime Pay = "
             << overtimePay << endl;
        cout << "Gross Salary = "
             << grossSalary << endl;
        cout << "Tax = "
             << tax << endl;
        cout << "Net Salary = "
             << netSalary << endl;
    }
    return 0;
}
```
