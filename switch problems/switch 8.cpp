#include <iostream>
using namespace std;
int main(){
    int component;
    double price;
    cout << "1. Keyboard" << endl;
    cout << "2. Mouse" << endl;
    cout << "3. Monitor" << endl;
    cout << "4. RAM" << endl;
    cout << "5. SSD" << endl;
    cout << "6. Graphics Card" << endl;
    cout << "Enter Component: ";
    cin >> component;
    switch(component)
    {
        case 1:
            price = 2500;
            cout << "Component: Keyboard" << endl;
            break;
        case 2:
            price = 1500;
            cout << "Component: Mouse" << endl;
            break;
        case 3:
            price = 30000;
            cout << "Component: Monitor" << endl;
            break;
        case 4:
            price = 8000;
            cout << "Component: RAM" << endl;
            break;

        case 5:
            price = 8500;
            cout << "Component: SSD" << endl;
            break;

        case 6:
            price = 120000;
            cout << "Component: Graphics Card" << endl;
            break;

        default:
            price = 0;
            cout << "Invalid Component." << endl;
    }
    cout << "Price = Rs. " << price << endl;
    return 0;
}
