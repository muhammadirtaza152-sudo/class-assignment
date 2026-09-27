#include <iostream>
using namespace std;
int main() {
    int level, matches, wins, penalty, teamSize;
    double averageScore, winPercentage;
    cout << "Player Level: ";
    cin >> level;
    cout << "Matches Played: ";
    cin >> matches;
    cout << "Matches Won: ";
    cin >> wins;
    cout << "Average Score: ";
    cin >> averageScore;
    cout << "Penalty Points: ";
    cin >> penalty;
    cout << "Team Size: ";
    cin >> teamSize;
    if (matches > 0) {
        winPercentage = (wins * 100.0) / matches;

        if (penalty >= 20) {
            cout << "Disqualified due to excessive penalties." << endl;
        }
        else {
            if (winPercentage >= 80) {
             if (averageScore >= 70) {
               if (teamSize >= 2) {
                 if (winPercentage >= 90) {
                    if (averageScore >= 90) {
                      cout << "ELITE QUALIFICATION!" << endl;
                   } else {
                                cout << "Tournament Qualified." << endl;
                            }
                    } else {
                            cout << "Tournament Qualified." << endl;
                        }
                   } else {
                        cout << "Team size is too small." << endl;
                     }
                    } else {
                    cout << "Average score is too low." << endl;
                   }
                  } else {
                cout << "Win percentage is too low." << endl;
            }
        }
    } else {
        cout << "Invalid number of matches." << endl;
    }
    return 0;
}
