#include <iostream>
using namespace std;
int main(){
    int account;
    cout << "1. Saving Account" << endl;
    cout << "2. Current Account" << endl;
    cout << "3. Student Account" << endl;
    cout << "4. Business Account" << endl;
    cout << "Enter Account Type: ";
    cin >> account;
    switch(account)
    {
        case 1:
            cout << "Account: Saving Account" << endl;
            cout << "Minimum Balance: Rs. 5000" << endl;
            break;
        case 2:
            cout << "Account: Current Account" << endl;
            cout << "Minimum Balance: Rs. 10000" << endl;
            break;
        case 3:
            cout << "Account: Student Account" << endl;
            cout << "Minimum Balance: Rs. 1000" << endl;
            break;
        case 4:
            cout << "Account: Business Account" << endl;
            cout << "Minimum Balance: Rs. 25000" << endl;
            break;
        default:
            cout << "Invalid Account Type." << endl;
    }

    return 0;
}
