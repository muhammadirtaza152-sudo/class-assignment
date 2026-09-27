#include <iostream>
using namespace std;

int main()
{
    int choice;
    int days;

    cout << "===== CAR RENTAL =====" << endl;
    cout << "1. Small Car - Rs. 3000/day" << endl;
    cout << "2. Sedan - Rs. 5000/day" << endl;
    cout << "3. SUV - Rs. 8000/day" << endl;

    cout << "Choose car: ";
    cin >> choice;

    cout << "Enter number of days: ";
    cin >> days;

    switch(choice)
    {
        case 1:
            cout << "Rental Cost = Rs. " << days * 3000;
            break;

        case 2:
            cout << "Rental Cost = Rs. " << days * 5000;
            break;

        case 3:
            cout << "Rental Cost = Rs. " << days * 8000;
            break;

        default:
            cout << "Invalid car choice!";
    }

    return 0;
}