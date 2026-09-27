#include <iostream>
using namespace std;
int main()
{
    int category, units;
    double rate, bill;
    cout << "1. Residential" << endl;
    cout << "2. Commercial" << endl;
    cout << "3. Industrial" << endl;
    cout << "Enter category: ";
    cin >> category;
    cout << "Enter units: ";
    cin >> units;
    switch(category)
    {
        case 1:
            rate = 15;
            break;
        case 2:
            rate = 25;
            break;
        case 3:
            rate = 35;
            break;

        default:
            rate = 0;
    }
    bill = units * rate;
    cout << "Rate = Rs. " << rate << " per unit" << endl;
    cout << "Bill = Rs. " << bill << endl;

    return 0;
}
