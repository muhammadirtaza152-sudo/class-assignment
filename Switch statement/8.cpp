#include <iostream>
using namespace std;

int main()
{
    int choice;
    int nights;

    cout << "===== HOTEL ROOMS =====\n";
    cout << "1. Single Room - Rs. 3000/night\n";
    cout << "2. Double Room - Rs. 5000/night\n";
    cout << "3. Deluxe Room - Rs. 8000/night\n";

    cout << "Select room: ";
    cin >> choice;

    cout << "Enter number of nights: ";
    cin >> nights;

    switch(choice)
    {
        case 1:
            cout << "Total = Rs. " << nights * 3000;
            break;

        case 2:
            cout << "Total = Rs. " << nights * 5000;
            break;

        case 3:
            cout << "Total = Rs. " << nights * 8000;
            break;

        default:
            cout << "Invalid room!";
    }

    return 0;
}