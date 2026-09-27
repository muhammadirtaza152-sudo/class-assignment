#include <iostream>
using namespace std;

int main()
{
    float balance, amount, fee, bonus;
    int accounttype, transactiontype, pinattempts;

    cout << "Enter your Balance: ";
    cin >> balance;
    cout << "Enter your Account type (1 = Student, 2 = Regular, 3 = Premium): ";
    cin >> accounttype;
    cout << "Enter your Transaction type (1 = Withdraw, 2 = Deposit, 3 = Transfer): ";
    cin >> transactiontype;
    cout << "Enter your Amount: ";
    cin >> amount;
    cout << "Enter your Pin Attempts: ";
    cin >> pinattempts;

    fee = 0;
    bonus = 0;

    if (pinattempts > 3)
    {
        cout << "Account Locked" << endl;
    }
    else if (balance <= 0)
    {
        cout << "Invalid Balance" << endl;
    }
    else if (amount <= 0)
    {
        cout << "Invalid Amount" << endl;
    }
    else if (accounttype > 3 || accounttype < 1)
    {
        cout << "Invalid Account Type" << endl;
    }
    else if (transactiontype > 3 || transactiontype < 1)
    {
        cout << "Invalid Transaction Type" << endl;
    }
    else
    {
        if (transactiontype == 1)
        {
            if (accounttype == 1)
            {
                if (amount > 50000)
                {
                    cout << "Withdrawal Limit Exceeded" << endl;
                }
                else
                {
                    fee = amount * 0.01;

                    if (balance < amount + fee)
                    {
                        cout << "Insufficient Balance" << endl;
                    }
                    else
                    {
                        balance = balance - amount - fee;

                        cout << "Withdrawal Successful" << endl;
                        cout << "Fee = Rs: " << fee << endl;
                        cout << "Remaining Balance = Rs: "
                             << balance << endl;
                    }
                }
            }

            else if (accounttype == 2)
            {
                if (amount > 100000)
                {
                    cout << "Withdrawal Limit Exceeded" << endl;
                }
                else
                {
                    fee = amount * 0.015;

                    if (balance < amount + fee)
                    {
                        cout << "Insufficient Balance" << endl;
                    }
                    else
                    {
                        balance = balance - amount - fee;

                        cout << "Withdrawal Successful" << endl;
                        cout << "Fee = Rs: " << fee << endl;
                        cout << "Remaining Balance = Rs: "
                             << balance << endl;
                    }
                }
            }

            else
            {
                if (amount > 500000)
                {
                    cout << "Withdrawal Limit Exceeded" << endl;
                }
                else
                {
                    fee = amount * 0.005;

                    if (balance < amount + fee)
                    {
                        cout << "Insufficient Balance" << endl;
                    }
                    else
                    {
                        balance = balance - amount - fee;

                        cout << "Withdrawal Successful" << endl;
                        cout << "Fee = Rs: " << fee << endl;
                        cout << "Remaining Balance = Rs: "
                             << balance << endl;
                    }
                }
            }
        }

        else if (transactiontype == 2)
        {
            if (amount >= 100000)
            {
                bonus = amount * 0.01;
            }

            balance = balance + amount + bonus;

            cout << "Deposit Successful" << endl;
            cout << "Bonus = Rs: " << bonus << endl;
            cout << "New Balance = Rs: "
                 << balance << endl;
        }

        else
        {
            if (accounttype == 3)
            {
                fee = amount * 0.02;

                if (amount + fee > balance)
                {
                    cout << "Insufficient Balance" << endl;
                }
                else
                {
                    balance = balance - amount - fee;

                    cout << "Premium Transfer Successful" << endl;
                    cout << "Fee = Rs: " << fee << endl;
                    cout << "Remaining Balance = Rs: "
                         << balance << endl;
                }
            }
            else if (amount > 100000)
            {
                cout << "Additional Verification Required" << endl;
            }
            else
            {
                fee = amount * 0.02;

                if (amount + fee > balance)
                {
                    cout << "Insufficient Balance" << endl;
                }
                else
                {
                    balance = balance - amount - fee;

                    cout << "Transfer Successful" << endl;
                    cout << "Fee = Rs: " << fee << endl;
                    cout << "Remaining Balance = Rs: "
                         << balance << endl;
                }
            }
        }
    }

    return 0;
}

