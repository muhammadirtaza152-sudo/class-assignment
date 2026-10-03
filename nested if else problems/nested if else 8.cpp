#include <iostream>
using namespace std;
int main(){
    int laptopAge;
    char problem, warranty, damage, charger;
    cout << "Laptop Repair Center : " << endl;
    cout << "Enter Laptop Age: ";
    cin >> laptopAge;
    cout << "Problem Type (H = Hardware, S = Software) : ";
    cin >> problem;
    cout << "Warranty? (Y/N): ";
    cin >> warranty;
    cout << "Damage Level (L = Low, M = Medium, H = High): ";
    cin >> damage;
    cout << "Original Charger Available? (Y/N): ";
    cin >> charger;

    if (warranty == 'Y')
    {
        if (problem == 'S')
        {
            cout << "Free Software Repair";
        }
        else
        {
            if (damage == 'L')
            {
                cout << "Free Hardware Repair";
            }
            else
            {
                cout << "Warranty Does Not Cover Major Damage";
            }
        }
    }
    else
    {
        if (problem == 'S')
        {
            cout << "Paid Software Repair";
        }
        else
        {
            if (charger == 'Y')
            {
                if (damage == 'M')
                {
                    cout << "Paid Hardware Repair";
                }
                else
                {
                    if (damage == 'L')
                    {
                        cout << "Minor Hardware Repair";
                    }
                    else
                    {
                        cout << "Major Repair Required";
                    }
                }
            }
            else
            {
                cout << "Charger Required for Diagnosis";
            }
        }
    }

    return 0;
}
