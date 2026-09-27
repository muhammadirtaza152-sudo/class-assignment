#include <iostream>
using namespace std;
int main() {
    double cpu, ram, disk, temperature, battery;
    char charger;
    cout << "CPU Usage %: ;
    cin >> cpu;
    cout << "RAM Usage %: ;
    cin >> ram;
    cout << "Disk Usage %: ;
    cin >> disk;
    cout << "Temperature: ;
    cin >> temperature;
    cout << "Battery %: ;
    cin >> battery;
    cout << "Charger Connected? (Y/N): ";
    cin >> charger;
    if (cpu > 90) {
        cout << "CPU: CRITICAL" << endl;
    }
    else {
        cout << "CPU: Normal" << endl;
    }

    if (ram > 85) {
        cout << "RAM: HIGH" << endl;
    }
    else {
        cout << "RAM: Normal" << endl;
    }

    if (temperature > 95) {
        cout << "EMERGENCY: System Shutdown Required!" << endl;
    }
    else {
        if (temperature > 85) {
            cout << "Temperature: OVERHEATING" << endl;
        }
        else {
            cout << "Temperature: Normal" << endl;
        }
    }

    if (battery < 20) {
        if (charger == 'N') {
            cout << "Low Battery Warning!" << endl;
        }
        else {
            cout << "Battery low but charging." << endl;
        }
    }
    else {
        cout << "Battery level normal." << endl;
    }

    if (cpu > 90) {
        if (ram > 85) {
            if (temperature > 85) {
                cout << "SYSTEM STATUS: CRITICAL" << endl;
            }
            else {
                cout << "System under heavy load." << endl;
            }
        }
        else {
            cout << "CPU load is high." << endl;
        }
    }
    else {
        cout << "System performance acceptable." << endl;
    }

    return 0;
}
