#include <iostream>
using namespace std;
int main()
{
    int choice;
    double balance = 50000, amount;
    cout << " ATM" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Deposit" << endl;
    cout << "4. Mini Statement" << endl;
    cout << "5. Exit" << endl;

    cout << "Enter choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Current Balance = " << balance << endl;
            break;

        case 2:
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            balance = balance - amount;
            cout << "Remaining Balance = " << balance << endl;
            break;

        case 3:
            cout << "Enter deposit amount: ";
            cin >> amount;
            balance = balance + amount;
            cout << "New Balance = " << balance << endl;
            break;

        case 4:
            cout << "Last Transaction: ATM Service Used" << endl;
            cout << "Available Balance = " << balance << endl;
            break;

        case 5:
            cout << "Thank you for using ATM." << endl;
            break;

        default:
            cout << "Invalid option." << endl;
    }

    return 0;
}
