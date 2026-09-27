#include <iostream>
using namespace std;
int main(){
    int signal;
    cout << "1. Red" << endl;
    cout << "2. Yellow" << endl;
    cout << "3. Green" << endl;
    cout << "4. Flashing" << endl;
    cout << "Enter signal: ";
    cin >> signal;
    switch(signal)
    {
        case 1:
            cout << "Red: Stop the vehicle." << endl;
            break;

        case 2:
            cout << "Yellow: Get ready to stop." << endl;
            break;

        case 3:
            cout << "Green: Go." << endl;
            break;

        case 4:
            cout << "Flashing: Drive carefully." << endl;
            break;

        default:
            cout << "Invalid signal." << endl;
    }

    return 0;
}
