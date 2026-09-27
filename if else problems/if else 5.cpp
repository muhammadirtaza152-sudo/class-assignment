#include <iostream>
using namespace std;
int main() {
    int teamScore, opponentScore, fouls, players;
    char captain, tournament;
    cout << "Your Team Score: ";
    cin >> teamScore;
    cout << "Opponent Score: ";
    cin >> opponentScore;
    cout << "Team Fouls: ";
    cin >> fouls;
    cout << "Available Players: ";
    cin >> players;
    cout << "Captain Available? (Y/N): ";
    cin >> captain;
    cout << "Tournament Match? (Y/N): ";
    cin >> tournament;
    if (players < 5) {
        cout << "Match cannot start." << endl;
    }
    else {
        if (captain == 'N') {
            cout << "Match cannot start without captain." << endl;
        }
        else {
            if (tournament == 'Y') {
                if (fouls >= 5) {
                    cout << "WARNING: High number of fouls." << endl;
                }
                else {
                    cout << "Fouls are within limit." << endl;
                }
            }
            else {
                cout << "Friendly match." << endl;
            }

            if (teamScore > opponentScore) {
                if (teamScore - opponentScore >= 20) {
                    cout << "You won by a dominant margin!" << endl;
                }
                else {
                    cout << "You won the match!" << endl;
                }
            }
            else {
                if (teamScore < opponentScore) {
                    cout << "You lost the match." << endl;
                }
                else {
                    cout << "Match Draw." << endl;
                }
            }
        }
    }

    return 0;
}
