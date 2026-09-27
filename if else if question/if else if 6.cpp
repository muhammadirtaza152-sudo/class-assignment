#include <iostream>
using namespace std;
int main(){
    int roomType, nights, guests, weekend, customerType;
    double rate , finalBill , tax , extraGuestCharges , discount , weekendCharges , roomCharges;
    
    cout << "Enter Room Type (1=Standard, 2=Deluxe, 3=Suite): ";
    cin >> roomType;
    cout << "Enter Number of Nights: ";
    cin >> nights;
    cout << "Enter Number of Guests: ";
    cin >> guests;
    cout << "Weekend? (1=Yes, 0=No): ";
    cin >> weekend;
    cout << "Customer Type (1=Regular, 2=Member, 3=VIP): ";
    cin >> customerType;
    
    rate = 0;
    discount = 0;
    tax = 0;
    
    if (nights <= 0){
        cout << "Invalid Number of Nights";
    }
    else if (guests <= 0)
    {
        cout << "Invalid Number of Guests";
    }
    else if (roomType < 1 || roomType > 3)
    {
        cout << "Invalid Room Type";
    }
    else if (customerType < 1 || customerType > 3)
    {
        cout << "Invalid Customer Type";
    }
    else
    {
        if (roomType == 1)
        {
            rate = 5000;
        }
        else if (roomType == 2)
        {
            rate = 8000;
        }
        else
        {
            rate = 15000;
        }

        roomCharges = rate * nights;

        if (roomType == 1)
        {
            if (guests > 2)
                extraGuestCharges = (guests - 2) * 2000 * nights;
            else
                extraGuestCharges = 0;
        }
        else if (roomType == 2)
        {
            if (guests > 4)
                extraGuestCharges = (guests - 4) * 2000 * nights;
            else
                extraGuestCharges = 0;
        }
        else
        {
            if (guests > 6)
                extraGuestCharges = (guests - 6) * 2000 * nights;
            else
                extraGuestCharges = 0;
        }

        if (weekend == 1)
        {
            weekendCharges = roomCharges * 0.20;
        }
        else
        {
            weekendCharges = 0;
        }

        double subtotal = roomCharges +
                          weekendCharges +
                          extraGuestCharges;

        if (customerType == 1)
        {
            discount = 0;
        }
        else if (customerType == 2)
        {
            discount = subtotal * 0.10;
        }
        else
        {
            discount = subtotal * 0.20;
        }

        if (nights >= 7)
        {
            discount = discount + (subtotal * 0.15);
        }

        double taxableAmount = subtotal - discount;

        if (taxableAmount < 30000)
        {
            tax = taxableAmount * 0.05;
        }
        else if (taxableAmount <= 100000)
        {
            tax = taxableAmount * 0.10;
        }
        else
        {
            tax = taxableAmount * 0.15;
        }

        finalBill = taxableAmount + tax;

        cout << "HOTEL BILL" << endl;
        cout << "Room Charges       = Rs. " << roomCharges << endl;
        cout << "Weekend Charges    = Rs. " << weekendCharges << endl;
        cout << "Extra Guest Charges= Rs. " << extraGuestCharges << endl;
        cout << "Discount           = Rs. " << discount << endl;
        cout << "Tax                = Rs. " << tax << endl;
        cout << "Final Bill         = Rs. " << finalBill << endl;
    }

    return 0;
}
