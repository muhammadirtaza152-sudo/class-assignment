#include <iostream>
using namespace std;

int main()
{
    int choice;
    int tickets;

    cout << "===== CINEMA =====\n";
    cout << "1. Normal Ticket - Rs. 500\n";
    cout << "2. VIP Ticket - Rs. 1000\n";
    cout << "3. Premium Ticket - Rs. 1500\n";

    cout << "Enter ticket type: ";
    cin >> choice;

    cout << "Enter number of tickets: ";
    cin >> tickets;

    switch(choice)
    {
        case 1:
            cout << "Total = Rs. " << tickets * 500;
            break;

        case 2:
            cout << "Total = Rs. " << tickets * 1000;
            break;

        case 3:
            cout << "Total = Rs. " << tickets * 1500;
            break;

        default:
            cout << "Invalid ticket type!";
    }

    return 0;
}