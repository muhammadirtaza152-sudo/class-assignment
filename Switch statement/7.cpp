#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== MOBILE PACKAGES =====\n";
    cout << "1. Daily Package\n";
    cout << "2. Weekly Package\n";
    cout << "3. Monthly Package\n";
    cout << "4. Internet Package\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Daily Package: Rs. 50";
            break;

        case 2:
            cout << "Weekly Package: Rs. 250";
            break;

        case 3:
            cout << "Monthly Package: Rs. 800";
            break;

        case 4:
            cout << "Internet Package: Rs. 500";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}