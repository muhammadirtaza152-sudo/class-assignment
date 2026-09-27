#include <iostream>
using namespace std;
int main()
{
    int choice, quantity;
    double price = 0, total;
    cout << "RESTAURANT" << endl;
    cout << "1. Burger - Rs.450" << endl;
    cout << "2. Pizza  - Rs.1200" << endl;
    cout << "3. Biryani - Rs.350" << endl;
    cout << "4. Karahi - Rs.1800" << endl;
    cout << "5. Fries - Rs.250" << endl;
    cout << "Select item: ";
    cin >> choice;
    cout << "Enter quantity: ";
    cin >> quantity;

    switch(choice)
    {
        case 1:
            price = 450;
            break;

        case 2:
            price = 1200;
            break;

        case 3:
            price = 350;
            break;

        case 4:
            price = 1800;
            break;

        case 5:
            price = 250;
            break;

        default:
            cout << "Invalid item." << endl;
    }

    total = price * quantity;

    cout << "Total Bill = Rs. " << total << endl;

    return 0;
}
