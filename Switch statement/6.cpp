#include <iostream>
using namespace std;

int main()
{
    int choice;
    int quantity;
    int price = 0;

    cout << "===== RESTAURANT MENU =====" << endl;

    cout << "1. Burger - Rs. 500" << endl;
    cout << "2. Pizza  - Rs. 1200" << endl;
    cout << "3. Biryani - Rs. 300" << endl;
    cout << "4. Sandwich - Rs. 400" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter quantity: ";
    cin >> quantity;

    switch(choice)
    {
        case 1:
            price = 500;
            break;

        case 2:
            price = 1200;
            break;

        case 3:
            price = 300;
            break;

        case 4:
            price = 400;
            break;

        default:
            cout << "Invalid item!";
            return 0;
    }

    cout << "Total Bill = Rs. " << price * quantity;

    return 0;
}