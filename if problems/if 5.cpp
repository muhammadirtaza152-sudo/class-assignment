#include <iostream>
using namespace std;
int main() {
    int level, matches, disconnects, reports, teamSize;
    double winRate, averageScore, ping;
    char cheat, finalStage;
    cout << "Player Level: ";
    cin >> level;
    cout << "Matches Played: ";
    cin >> matches;
    cout << "Win Rate %: ";
    cin >> winRate;
    cout << "Average Score: ";
    cin >> averageScore;
    cout << "Ping: ";
    cin >> ping;
    cout << "Disconnects: ";
    cin >> disconnects;
    cout << "Reports: ";
    cin >> reports;
    cout << "Cheat Detected (Y/N): ";
    cin >> cheat;
    cout << "Team Size: ";
    cin >> teamSize;
    cout << "Final Stage (Y/N): ";
    cin >> finalStage;
    if (level >= 50)
        cout << "High Level Player." << endl;
    if (matches >= 20)
        cout << "Experienced Player." << endl;
    if (winRate >= 80)
        cout << "High Win Rate." << endl;
    if (averageScore >= 90)
        cout << "Excellent Average Score." << endl;
    if (ping > 100)
        cout << "High Ping!" << endl;
    if (ping > 200)
        cout << "Critical Ping!" << endl;
    if (disconnects > 3)
        cout << "Too Many Disconnects!" << endl;
    if (reports >= 5)
        cout << "Many Player Reports!" << endl;
    if (cheat == 'Y')
        cout << "CHEAT DETECTED!" << endl;
    if (teamSize < 5)
        cout << "Team Size Below Requirement!" << endl;
    if (finalStage == 'Y')
        cout << "Final Tournament Stage." << endl;
    if (winRate >= 90 && averageScore >= 95)
        cout << "Elite Performance!" << endl;
    if (ping > 200 && disconnects > 3)
        cout << "Network Reliability Critical!" << endl;
    if (reports >= 5 && cheat == 'Y')
        cout << "SERIOUS CHEATING ALERT!" << endl;
    if (level >= 50 && matches >= 20)
        cout << "Experienced High-Level Player." << endl;

    if (finalStage == 'Y' && cheat == 'Y')
        cout << "FINAL STAGE CHEATING ALERT!" << endl;

    return 0;
}
