#include <iostream>
using namespace std;
int main() {
    int employeeID, securityLevel;
    char fingerprint, face, accessCard, weekend;
    char serverRoom, adminPermission;
    int officeTime;
    cout << "Employee ID: ";
    cin >> employeeID;
    cout << "Fingerprint Matched (Y/N): ";
    cin >> fingerprint;
    cout << "Face Recognition (Y/N): ";
    cin >> face;
    cout << "Office Time Valid (Y/N): ";
    cin >> officeTime;
    cout << "Security Level: ";
    cin >> securityLevel;
    cout << "Access Card Valid (Y/N): ";
    cin >> accessCard;
    cout << "Weekend (Y/N): ";
    cin >> weekend;
    cout << "Server Room Requested (Y/N): ";
    cin >> serverRoom;
    cout << "Admin Permission (Y/N): ";
    cin >> adminPermission;
    if (employeeID > 0)
        cout << "Employee ID Valid." << endl;
    if (fingerprint == 'Y')
        cout << "Fingerprint Matched." << endl;
    if (face == 'Y')
        cout << "Face Recognized." << endl;
    if (accessCard == 'Y')
        cout << "Access Card Valid." << endl;
    if (officeTime == 1)
        cout << "Office Timing Valid." << endl;
    if (weekend == 'Y')
        cout << "Weekend Access." << endl;
    if (serverRoom == 'Y')
        cout << "Server Room Requested." << endl;
    if (securityLevel >= 5)
        cout << "High Security Clearance." << endl;
    if (adminPermission == 'Y')
        cout << "Admin Permission Available." << endl;
    if (fingerprint == 'Y' && face == 'Y')
        cout << "Biometric Verification Successful." << endl;
    if (accessCard == 'Y' && fingerprint == 'Y')
        cout << "Card + Fingerprint Verified." << endl;
    if (serverRoom == 'Y' && securityLevel < 5)
        cout << "SERVER ACCESS DENIED: Low Security Level!" << endl;

    if (serverRoom == 'Y' && adminPermission == 'N')
        cout << "SERVER ACCESS DENIED: No Admin Permission!" << endl;
    if (weekend == 'Y' && serverRoom == 'Y')
        cout << "WEEKEND SERVER ACCESS ALERT!" << endl;
    if (employeeID <= 0 && accessCard == 'Y')
        cout << "SECURITY ALERT: Invalid Employee + Valid Card!" << endl;

    if (face == 'Y' && fingerprint == 'N')
        cout << "Biometric Mismatch!" << endl;

    return 0;
}
