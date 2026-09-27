#include<iostream>
using namespace std;

int main()
{
    int Attendance, FamilyIncome;
    char Grade;


    cout << "Enter your Grade (A-D)" << endl;
    cin >> Grade;

    cout << "Enter your Attendance (30-100)" << endl;
    cin >> Attendance;

    cout << "Enter your Family income" << endl;
    cin >> FamilyIncome;

    if ((Grade == 'A' || Grade == 'a') &&
        (Attendance > 75 && Attendance <= 100) &&
        (FamilyIncome <= 100000))
    {
        cout << "YOU are eligible for Scholarship" << endl;
        
    }

    if ((Grade == 'B' || Grade == 'b') &&
        (Attendance >= 55 && Attendance <= 70) &&
        (FamilyIncome <= 100000))
    {
        cout << "YOU are eligible for Scholarship" << endl;
       
    }
     if ((Grade == 'C' || Grade == 'c') &&
        (Attendance >= 45 && Attendance <= 55) &&
        (FamilyIncome <= 100000))
        {
  cout << "YOU are not eligible for Scholarship" << endl;
        }
  if ((Grade == 'D' || Grade == 'd') &&
        (Attendance >= 30&& Attendance <=45) &&
        (FamilyIncome <= 100000))
        {
             cout << "YOU are not eligible for Scholarship" << endl;
        }
else
{
    cout<<"Invalid input"<<endl;
}
    return 0;
}