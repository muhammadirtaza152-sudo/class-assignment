#include <iostream>
using namespace std;
int main()
{
    int age, patientType, emergency, days;
    float tests, medicine , roomRate, roomCharges , emergencyCharges , subtotal, tax, finalBill;
    float discount = 0;
    cout << "Age: ";
    cin >> age;
    cout << "Patient Type (1=General, 2=Senior, 3=Child, 4=VIP): ";
    cin >> patientType;
    cout << "Emergency (1=Normal, 2=Serious, 3=Critical): ";
    cin >> emergency;
    cout << "Days: ";
    cin >> days;
    cout << "Tests Cost: ";
    cin >> tests;
    cout << "Medicine Cost: ";
    cin >> medicine;
    if (age < 0 || days <= 0 || tests < 0 || medicine < 0)
    {
        cout << "Invalid Input";
    }
    else if (patientType < 1 || patientType > 4)
    {
        cout << "Invalid Patient Type";
    }
    else if (emergency < 1 || emergency > 3)
    {
        cout << "Invalid Emergency Level";
    }
    else
    {
        if (patientType == 1)
            roomRate = 5000;
        else if (patientType == 2)
            roomRate = 4000;
        else if (patientType == 3)
            roomRate = 3500;
        else
            roomRate = 15000;

        roomCharges = roomRate * days;

        if (emergency == 1)
            emergencyCharges = 0;
        else if (emergency == 2)
            emergencyCharges = 20000;
        else
            emergencyCharges = 50000;

        subtotal = roomCharges + emergencyCharges + tests + medicine;

        if (emergency == 3 && patientType == 4)
        {
            discount = 0;
        }
        else if (emergency == 3)
        {
            discount = subtotal * 0.05;
        }
        else if (patientType == 2)
        {
            discount = subtotal * 0.20;
        }
        else if (patientType == 3)
        {
            discount = subtotal * 0.15;
        }
        else if (patientType == 4)
        {
            discount = subtotal * 0.05;
        }
        else
        {
            discount = 0;
        }
        subtotal = subtotal - discount;

        if (subtotal < 50000){
            tax = subtotal * 0.05;}
        else if (subtotal <= 150000){
            tax = subtotal * 0.10;}
        else{
            tax = subtotal * 0.15;}

        finalBill = subtotal + tax;

        cout << "Room Charges = " << roomCharges << endl;
        cout << "Emergency Charges = " << emergencyCharges << endl;
        cout << "Discount = " << discount << endl;
        cout << "Tax = " << tax << endl;
        cout << "Final Bill = " << finalBill << endl;
    }

    return 0;
}

