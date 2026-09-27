#include <iostream>
using namespace std;

int main()
{
    int units;
    int type;

    cout << "===== ELECTRICITY BILL =====" << endl;

    cout << "1. Residential" << endl;
    cout << "2. Commercial" << endl;

    cout << "Enter customer type: ";
    cin >> type;

    cout << "Enter electricity units: ";
    cin >> units;

    switch(type)
    {
        case 1:

            if(units <= 100)
            {
                cout << "Bill = " << units * 10;
            }
            else if(units <= 200)
            {
                cout << "Bill = " << units * 15;
            }
            else
            {
                cout << "Bill = " << units * 20;
            }

            break;

        case 2:

            if(units <= 100)
            {
                cout << "Bill = " << units * 20;
            }
            else
            {
                cout << "Bill = " << units * 30;
            }

            break;

        default:
            cout << "Invalid customer type!";
    }

    return 0;
}
