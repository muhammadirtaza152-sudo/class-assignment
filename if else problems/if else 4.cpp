#include <iostream>
using namespace std;
int main() {
    double attendance, labMarks, safetyMarks;
    int violations;
    char equipment, instructor;
    cout << "Attendance %: ";
    cin >> attendance;
    cout << "Lab Marks %: ";
    cin >> labMarks;
    cout << "Safety Marks %: ";
    cin >> safetyMarks;
    cout << "Equipment Available? (Y/N): ";
    cin >> equipment;
    cout << "Instructor Approved? (Y/N): ";
    cin >> instructor;
    cout << "Previous Violations: ";
    cin >> violations;
    if (violations >= 3) {
        cout << "Experiment DENIED due to violations." << endl;
    }
    else {
          if (equipment == 'Y') {
           if (instructor == 'Y') {
            if (attendance >= 75) {
            if (labMarks >= 60) {
             if (safetyMarks >= 70) {
              if (safetyMarks >= 95) {
               if (labMarks >= 90) {
                   cout << "Advanced Experiment Approved" << endl;
               }else {
                  cout << "Normal Experiment Approved" << endl;
                }
                  }else {
                      cout << "Normal Experiment Approved." << endl;
                            }
                   } else {
                            cout << "Safety marks too low." << endl;
                        }
                    }
                      else {
                        cout << "Lab marks too low." << endl;
                    }
                   }
                    else {
                    cout << "Attendance insufficient." << endl;
                   }
                }
                  else {
                cout << "Instructor approval required." << endl;
                  }
             }
            else {
            cout << "Required equipment unavailable." << endl;
        }
    }
    return 0;
}
