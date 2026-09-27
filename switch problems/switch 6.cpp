#include <iostream>
using namespace std;
int main(){
    int vehicle, hours;
    double rate, total;
    cout << "1. Motorcycle - Rs.50/hour" << endl;
    cout << "2. Car - Rs.100/hour" << endl;
    cout << "3. Van - Rs.150/hour" << endl;
    cout << "4. Bus - Rs.250/hour" << endl;
    cout << "5. Truck - Rs.300/hour" << endl;
    cout << "Enter vehicle type: ";
    cin >> vehicle;
    cout << "Enter parking hours: ";
    cin >> hours;
    switch(vehicle)
    {
        case 1:
            rate = 50;
            break;

        case 2:
            rate = 100;
            break;

        case 3:
            rate = 150;
            break;

        case 4:
            rate = 250;
            break;

        case 5:
            rate = 300;
            break;

        default:
            rate = 0;
    }
    total = rate * hours;
    cout << "Parking Charges = Rs. " << total << endl;

    return 0;
}
