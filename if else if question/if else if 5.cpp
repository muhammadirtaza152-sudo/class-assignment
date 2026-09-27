#include <iostream>
using namespace std;
int main()
{
    float m1, m2, m3, m4, m5;
    float attendance, assignment, quiz , average;
    int feeStatus;

    cout << "Enter marks of Subject 1: ";
    cin >> m1;
    cout << "Enter marks of Subject 2: ";
    cin >> m2;
    cout << "Enter marks of Subject 3: ";
    cin >> m3;
    cout << "Enter marks of Subject 4: ";
    cin >> m4;
    cout << "Enter marks of Subject 5: ";
    cin >> m5;
    cout << "Enter Attendance (%): ";
    cin >> attendance;
    cout << "Enter Assignment (%): ";
    cin >> assignment;
    cout << "Enter Quiz (%): ";
    cin >> quiz;
    cout << "Fee Paid? (1=Yes, 0=No): ";
    cin >> feeStatus;

    average = (m1 + m2 + m3 + m4 + m5) / 5;

    cout << "Average = " << average << "%" << endl;

    if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40)
    {
        cout << "Failed" << endl;
    }
    else if (attendance < 50)
    {
        cout << "Attendance Shortage" << endl;
    }
    else if (average >= 85 && attendance >= 90 && assignment >= 80 && quiz >= 80 && feeStatus == 1)
    {
        cout << "Merit Scholarship";
    }
    else if (feeStatus == 0)
    {
        cout << "Fee Clearance Required" << endl;
    }
    else if (average >= 75 && attendance >= 80)
    {
        cout << "Good Standing" << endl;
    }
    else if (average >= 60 && attendance >= 75)
    {
        cout << "Warning" << endl;
    }
    else
    {
        cout << "Academic Probation" << endl;
    }

    return 0;
}
