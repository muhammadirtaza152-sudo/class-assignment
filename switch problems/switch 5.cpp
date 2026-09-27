#include <iostream>
using namespace std;
int main()
{
    int month;
    cout << "Enter Month Number: ";
    cin >> month;
    switch(month)
    {
        case 1:
            cout << "Month: January" << endl;
            cout << "Season: Winter" << endl;
            break;

        case 2:
            cout << "Month: February" << endl;
            cout << "Season: Winter" << endl;
            break;

        case 3:
            cout << "Month: March" << endl;
            cout << "Season: Spring" << endl;
            break;

        case 4:
            cout << "Month: April" << endl;
            cout << "Season: Spring" << endl;
            break;

        case 5:
            cout << "Month: May" << endl;
            cout << "Season: Spring" << endl;
            break;

        case 6:
            cout << "Month: June" << endl;
            cout << "Season: Summer" << endl;
            break;

        case 7:
            cout << "Month: July" << endl;
            cout << "Season: Summer" << endl;
            break;

        case 8:
            cout << "Month: August" << endl;
            cout << "Season: Summer" << endl;
            break;

        case 9:
            cout << "Month: September" << endl;
            cout << "Season: Autumn" << endl;
            break;

        case 10:
            cout << "Month: October" << endl;
            cout << "Season: Autumn" << endl;
            break;

        case 11:
            cout << "Month: November" << endl;
            cout << "Season: Autumn" << endl;
            break;

        case 12:
            cout << "Month: December" << endl;
            cout << "Season: Winter" << endl;
            break;

        default:
            cout << "Invalid Month." << endl;
    }

    return 0;
}
