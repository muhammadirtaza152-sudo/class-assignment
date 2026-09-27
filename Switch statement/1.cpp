#include <iostream>
using namespace std;

int main()
{
    int pin;
    int choice;
    double balance = 50000;
    double amount;

    cout << "===== ATM BANKING SYSTEM =====" << endl;

    cout << "Enter your PIN: ";
    cin >> pin;

    if (pin != 1234)
    {
        cout << "Incorrect PIN!" << endl;
        return 0;
    }

    cout << "\nLogin Successful!" << endl;

    cout << "\n===== ATM MENU =====" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Transfer Money" << endl;
    cout << "5. Change PIN" << endl;
    cout << "6. Exit" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "\nYour current balance is: Rs. "
                 << balance << endl;
            break;

        case 2:
            cout << "\nEnter amount to deposit: ";
            cin >> amount;

            if (amount > 0)
            {
                balance = balance + amount;

                cout << "Amount deposited successfully!" << endl;
                cout << "New balance: Rs. "
                     << balance << endl;
            }
            else
            {
                cout << "Invalid amount!" << endl;
            }
            break;

        case 3:
            cout << "\nEnter amount to withdraw: ";
            cin >> amount;

            if (amount <= 0)
            {
                cout << "Invalid amount!" << endl;
            }
            else if (amount > balance)
            {
                cout << "Insufficient balance!" << endl;
            }
            else
            {
                balance = balance - amount;

                cout << "Please collect your cash." << endl;
                cout << "Remaining balance: Rs. "
                     << balance << endl;
            }
            break;

        case 4:
        {
            int accountNumber;

            cout << "\nEnter receiver account number: ";
            cin >> accountNumber;

            cout << "Enter transfer amount: ";
            cin >> amount;

            if (amount <= 0)
            {
                cout << "Invalid amount!" << endl;
            }
            else if (amount > balance)
            {
                cout << "Insufficient balance!" << endl;
            }
            else
            {
                balance = balance - amount;

                cout << "\nTransfer Successful!" << endl;
                cout << "Transferred to account: "
                     << accountNumber << endl;
                cout << "Amount: Rs. "
                     << amount << endl;
                cout << "Remaining balance: Rs. "
                     << balance << endl;
            }

            break;
        }

        case 5:
        {
            int oldPin;
            int newPin;

            cout << "\nEnter old PIN: ";
            cin >> oldPin;

            if (oldPin == 1234)
            {
                cout << "Enter new PIN: ";
                cin >> newPin;

                if (newPin >= 1000 && newPin <= 9999)
                {
                    cout << "PIN changed successfully!" << endl;
                }
                else
                {
                    cout << "PIN must contain 4 digits!" << endl;
                }
            }
            else
            {
                cout << "Incorrect old PIN!" << endl;
            }

            break;
        }

        case 6:
            cout << "\nThank you for using our ATM!" << endl;
            break;

        default:
            cout << "\nInvalid choice!" << endl;
    }

    return 0;
}