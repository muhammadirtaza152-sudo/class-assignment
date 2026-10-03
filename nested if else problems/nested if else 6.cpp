#include <iostream>
using namespace std;
int main(){
    int purchase;
    char customer, day, coupon;
    cout << "Supermarket Discount System : " << endl;
    cout << "Enter Purchase Amount : ";
    cin >> purchase;
    cout << "Customer Type (R = Regular, G = Gold, P = Platinum) : ";
    cin >> customer;
    cout << "Day (W = Weekend, N = Normal) : ";
    cin >> day;
    cout << "Coupon? (Y/N) : ";
    cin >> coupon;

    if (purchase >= 50000)
    {
        if (customer == 'P')
        {
            if (day == 'W')
            {
                cout << "30% Discount";
            }
            else
            {
                cout << "25% Discount";
            }
        }
        else
        {
            if (customer == 'G')
            {
                if (coupon == 'Y')
                {
                    cout << "20% Discount";
                }
                else
                {
                    cout << "15% Discount";
                }
            }
            else
            {
                if (coupon == 'Y')
                {
                    cout << "10% Discount";
                }
                else
                {
                    cout << "5% Discount";
                }
            }
        }
    }
    else
    {
        if (purchase >= 20000)
        {
            if (customer == 'P')
            {
                cout << "15% Discount";
            }
            else
            {
                if (customer == 'G')
                {
                    cout << "10% Discount";
                }
                else
                {
                    cout << "5% Discount";
                }
            }
        }
        else
        {
            cout << "No Discount";
        }
    }

    return 0;
}
