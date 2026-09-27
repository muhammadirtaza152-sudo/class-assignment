#include <iostream>
using namespace std;
int main() {
    int studentID, labTime, attendance, deviceNumber;
    char password, biometric, fine, admin;
    char usb, suspicious;
    cout << "Student ID: ";
    cin >> studentID;
    cout << "Password Correct (Y/N): ";
    cin >> password;
    cout << "Biometric Verified (Y/N): ";
    cin >> biometric;
    cout << "Lab Timing Valid (Y/N): ";
    cin >> labTime;
    cout << "Attendance %: ";
    cin >> attendance;
    cout << "Pending Fine (Y/N): ";
    cin >> fine;
    cout << "Device Number: ";
    cin >> deviceNumber;
    cout << "Admin Approval (Y/N): ";
    cin >> admin;
    cout << "USB Connected (Y/N): ";
    cin >> usb;
    cout << "Suspicious File (Y/N): ";
    cin >> suspicious;
    if (studentID > 0)
        cout << "Student ID Entered." << endl;
    if (password == 'Y')
        cout << "Password Correct." << endl;
    if (biometric == 'Y')
        cout << "Biometric Verified." << endl;
    if (labTime == 1)
        cout << "Valid Lab Timing." << endl;
    if (attendance >= 75)
        cout << "Attendance Requirement Satisfied." << endl;
    if (fine == 'Y')
        cout << "Pending Fine Detected!" << endl;
    if (admin == 'Y')
        cout << "Admin Approval Available." << endl;
    if (usb == 'Y')
        cout << "USB Connected." << endl;
    if (suspicious == 'Y')
        cout << "Suspicious File Detected!" << endl;
    if (deviceNumber >= 100 && deviceNumber <= 999)
        cout << "Device Number Format Valid." << endl;
    if (usb == 'Y' && suspicious == 'Y')
        cout << "SECURITY ALERT: USB + Suspicious File!" << endl;
    if (usb == 'Y' && suspicious == 'Y' && !(deviceNumber >= 100 && deviceNumber <= 999))
        cout << "CRITICAL: Unauthorized Device with Suspicious File!" << endl;
    if (biometric == 'Y' && password == 'Y' && studentID > 0)
        cout << "Identity Verification Successful." << endl;
    if (fine == 'Y' && admin == 'N')
        cout << "ACCESS RESTRICTION: Fine + No Admin Approval!" << endl;
    if (suspicious == 'Y' &&
        !(deviceNumber >= 100 && deviceNumber <= 999))
        cout << "SECURITY BREACH DETECTED!" << endl;

    return 0;
}
