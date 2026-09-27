#include <iostream>
using namespace std;
int main() {
    int age;
    double baggage;
    char ticket, passport, boarding , metal, restricted, international , visa, clearance;
    cout << "Passenger Age: ";
    cin >> age;
    cout << "Ticket Valid (Y/N): ";
    cin >> ticket;
    cout << "Passport Valid (Y/N): ";
    cin >> passport;
    cout << "Boarding Pass Valid (Y/N): ";
    cin >> boarding;
    cout << "Baggage Weight (kg): ";
    cin >> baggage;
    cout << "Metal Detector Alarm (Y/N): ";
    cin >> metal;
    cout << "Restricted Item (Y/N): ";
    cin >> restricted;
    cout << "International Flight (Y/N): ";
    cin >> international;
    cout << "Visa Valid (Y/N): ";
    cin >> visa;
    cout << "Security Clearance (Y/N): ";
    cin >> clearance;
    if (ticket == 'Y')
        cout << "Ticket Valid." << endl;
    if (passport == 'Y')
        cout << "Passport Valid." << endl;

    if (boarding == 'Y')
        cout << "Boarding Pass Valid." << endl;
    if (baggage > 23)
        cout << "Excess Baggage!" << endl;
    if (metal == 'Y')
        cout << "Metal Detector Alarm!" << endl;

    if (restricted == 'Y')
        cout << "RESTRICTED ITEM DETECTED!" << endl;
    if (international == 'Y')
        cout << "International Flight." << endl;
    if (visa == 'Y')
        cout << "Visa Valid." << endl;

    if (clearance == 'Y')
        out << "Security Clearance Valid." << endl;
       if (age < 18)
        cout << "Minor Passenger." << endl;

    if (international == 'Y' && visa == 'N')
        cout << "INTERNATIONAL TRAVEL BLOCKED: Invalid Visa!" << endl;
    if (restricted == 'Y' && metal == 'Y')
        cout << "CRITICAL SECURITY ALERT!" << endl;
    if (passport == 'N' && international == 'Y')
        cout << "TRAVEL BLOCKED: Invalid Passport!" << endl;

    if (baggage > 30 && international == 'Y')
        cout << "EXCESSIVE INTERNATIONAL BAGGAGE!" << endl;

    if (boarding == 'N' && ticket == 'Y')
        cout << "Boarding Pass Required!" << endl;

    if (clearance == 'N' && restricted == 'Y')
        cout << "SECURITY CLEARANCE REQUIRED!" << endl;

    return 0;
}
