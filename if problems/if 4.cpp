#include <iostream>
using namespace std;
int main() {
    double fuel, temperature, oxygen, wind, battery;
    char weather, communication, navigation, crew;
    cout << "Fuel %: ";
    cin >> fuel;
    cout << "Engine Temperature: ";
    cin >> temperature;
    cout << "Oxygen Level %: ";
    cin >> oxygen;
    cout << "Weather Good (Y/N): ";
    cin >> weather;
    cout << "Wind Speed: ";
    cin >> wind;
    cout << "Communication Working (Y/N): ";
    cin >> communication;
    cout << "Navigation Working (Y/N): ";
    cin >> navigation;
    cout << "Crew Ready (Y/N): ";
    cin >> crew;
    cout << "Battery %: ";
    cin >> battery;
    if (fuel < 90)
        cout << "INSUFFICIENT FUEL!" << endl;

    if (fuel >= 98)
        cout << "Fuel Level Optimal." << endl;

    if (temperature > 80)
        cout << "Engine Temperature High!" << endl;

    if (temperature > 100)
        cout << "CRITICAL ENGINE TEMPERATURE!" << endl;

    if (oxygen < 95)
        cout << "Oxygen Level Warning!" << endl;

    if (oxygen < 90)
        cout << "CRITICAL OXYGEN LEVEL!" << endl;

    if (wind > 50)
        cout << "High Wind Speed!" << endl;

    if (weather == 'N')
        cout << "BAD WEATHER!" << endl;

    if (communication == 'N')
        cout << "COMMUNICATION FAILURE!" << endl;

    if (navigation == 'N')
        cout << "NAVIGATION FAILURE!" << endl;

    if (crew == 'N')
        cout << "CREW NOT READY!" << endl;

    if (battery < 30)
        cout << "LOW BATTERY!" << endl;

    if (battery < 20)
        cout << "CRITICAL BATTERY!" << endl;

    if (fuel >= 98 && temperature <= 70)
        cout << "OPTIMAL FUEL + ENGINE CONDITION!" << endl;

    if (weather == 'N' && wind > 50)
        cout << "LAUNCH DANGEROUS: Bad Weather + High Wind!" << endl;

    if (communication == 'N' && navigation == 'N')
        cout << "CRITICAL: Communication + Navigation Failure!" << endl;

    if (battery < 20 && communication == 'N')
        cout << "CRITICAL: Battery + Communication Failure!" << endl;

    if (oxygen < 90 && crew == 'N')
        cout << "CRITICAL: Oxygen + Crew Problem!" << endl;

    if (fuel < 90 && battery < 30 && temperature > 100)
        cout << "MISSION LAUNCH IMPOSSIBLE!" << endl;

    return 0;
}
