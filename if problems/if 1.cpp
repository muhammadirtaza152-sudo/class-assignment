#include <iostream>
using namespace std;
int main() {
    double balance, amount;
    int accountAge, transactions, fraudReports, hour;
    char international, cardActive, otp, vip;
    cout << "Account Balance: ";
    cin >> balance;
    cout << "Transaction Amount: ";
    cin >> amount;
    cout << "Account Age (months): ";
    cin >> accountAge;
    cout << "Transactions Today: ";
    cin >> transactions;
    cout << "International Transaction (Y/N): ";
    cin >> international;
    cout << "Card Active (Y/N): ";
    cin >> cardActive;
    cout << "OTP Verified (Y/N): ";
    cin >> otp;
    cout << "Transaction Hour (0-23): ";
    cin >> hour;
    cout << "Previous Fraud Reports: ";
    cin >> fraudReports;
    cout << "VIP Customer (Y/N): ";
    cin >> vip;
    if (amount > balance)
        cout << "ERROR: Insufficient Balance!" << endl;

    if (amount > 100000)
        cout << "HIGH VALUE TRANSACTION!" << endl;

    if (accountAge < 6)
        cout << "WARNING: New Account!" << endl;

    if (transactions > 20)
        cout << "WARNING: Too Many Transactions Today!" << endl;

    if (international == 'Y')
        cout << "International Transaction Detected." << endl;

    if (hour >= 0 && hour <= 5)
        cout << "NIGHT TRANSACTION DETECTED!" << endl;

    if (fraudReports >= 2)
        cout << "HIGH FRAUD RISK!" << endl;

    if (otp == 'N')
        cout << "OTP NOT VERIFIED!" << endl;

    if (vip == 'Y')
        cout << "VIP CUSTOMER." << endl;

    if (international == 'Y' && amount > 100000 && hour >= 0 && hour <= 5)
        cout << "CRITICAL: International High-Value Night Transaction!" << endl;

    if (fraudReports >= 2 && transactions > 20 && accountAge < 6)
        cout << "CRITICAL FRAUD PATTERN DETECTED!" << endl;

    if (cardActive == 'N')
        cout << "TRANSACTION BLOCKED: Card Inactive!" << endl;

    return 0;
}
