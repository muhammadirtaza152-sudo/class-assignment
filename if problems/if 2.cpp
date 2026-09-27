#include <iostream>
using namespace std;
int main() {
    double speed, distance, tyrePressure, engineTemp;
    double fuel;
    char brake, attention, weather, time;
    cout << "Speed (km/h): ";
    cin >> speed;
    cout << "Distance from Obstacle (m): ";
    cin >> distance;
    cout << "Brake Condition (G=Good, P=Poor): ";
    cin >> brake;
    cout << "Tyre Pressure (PSI): ";
    cin >> tyrePressure;
    cout << "Engine Temperature: ";
    cin >> engineTemp;
    cout << "Fuel Percentage: ";
    cin >> fuel;
    cout << "Driver Attention (Y/N): ";
    cin >> attention;
    cout << "Weather (G=Good, R=Rain): ";
    cin >> weather;
    cout << "Night/Day (N/D): ";
    cin >> time;
    if (speed > 120)
        cout << "WARNING: Overspeeding!" << endl;

    if (speed > 160)
        cout << "CRITICAL: Extremely High Speed!" << endl;

    if (distance < 20)
        cout << "WARNING: Obstacle Very Close!" << endl;

    if (distance < 5)
        cout << "EMERGENCY BRAKING REQUIRED!" << endl;

    if (brake == 'P')
        cout << "WARNING: Brake Condition Poor!" << endl;
    if (tyrePressure < 25)
        cout << "WARNING: Low Tyre Pressure!" << endl;

    if (engineTemp > 100)
        cout << "CRITICAL: Engine Overheating!" << endl;

    if (fuel < 10)
        cout << "LOW FUEL WARNING!" << endl;

    if (attention == 'N')
        cout << "DRIVER ATTENTION WARNING!" << endl;

    if (weather == 'R')
        cout << "RAIN DETECTED!" << endl;

    if (time == 'N')
        cout << "NIGHT DRIVING!" << endl;
    if (speed > 100 && distance < 30)
        cout << "CRITICAL: High Speed + Close Obstacle!" << endl;

    if (speed > 150 && brake == 'P')
        cout << "EXTREME DANGER: High Speed + Poor Brakes!" << endl;

    if (time == 'N' && weather == 'R' && speed > 100)
        cout << "CRITICAL NIGHT RAIN SPEED CONDITION!" << endl;

    if (distance < 10 && attention == 'N')
        cout << "EMERGENCY: Driver Not Attentive!" << endl;

    return 0;
}
