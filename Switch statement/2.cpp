#include <iostream>
using namespace std;

int main()
{
    int mainChoice, subChoice;
    int marks;
    double fee;

    cout << "=====================================\n";
    cout << "       UNIVERSITY STUDENT PORTAL\n";
    cout << "=====================================\n";

    cout << "1. Student Result\n";
    cout << "2. Fee Management\n";
    cout << "3. Department Information\n";
    cout << "4. Scholarship Check\n";
    cout << "5. Exit\n";

    cout << "\nEnter your choice: ";
    cin >> mainChoice;

    switch (mainChoice)
    {
        // ---------------- RESULT ----------------
        case 1:
        {
            cout << "\n----- RESULT SECTION -----\n";

            cout << "Enter your marks (0-100): ";
            cin >> marks;

            if (marks < 0 || marks > 100)
            {
                cout << "Invalid marks!\n";
            }
            else
            {
                switch (marks / 10)
                {
                    case 10:
                    case 9:
                        cout << "Grade: A+\n";
                        cout << "Excellent Performance!\n";
                        break;

                    case 8:
                        cout << "Grade: A\n";
                        cout << "Very Good Performance!\n";
                        break;

                    case 7:
                        cout << "Grade: B\n";
                        cout << "Good Performance!\n";
                        break;

                    case 6:
                        cout << "Grade: C\n";
                        cout << "Satisfactory Performance!\n";
                        break;

                    case 5:
                        cout << "Grade: D\n";
                        cout << "You need improvement.\n";
                        break;

                    default:
                        cout << "Grade: F\n";
                        cout << "You are failed.\n";
                }
            }

            break;
        }

        // ---------------- FEE MANAGEMENT ----------------
        case 2:
        {
            cout << "\n----- FEE MANAGEMENT -----\n";

            cout << "1. Computer Science\n";
            cout << "2. Software Engineering\n";
            cout << "3. Artificial Intelligence\n";
            cout << "4. Electrical Engineering\n";

            cout << "Select Department: ";
            cin >> subChoice;

            switch (subChoice)
            {
                case 1:
                    fee = 85000;
                    cout << "Computer Science Fee: " << fee << endl;
                    break;

                case 2:
                    fee = 90000;
                    cout << "Software Engineering Fee: " << fee << endl;
                    break;

                case 3:
                    fee = 95000;
                    cout << "Artificial Intelligence Fee: " << fee << endl;
                    break;

                case 4:
                    fee = 75000;
                    cout << "Electrical Engineering Fee: " << fee << endl;
                    break;

                default:
                    cout << "Invalid department!\n";
            }

            break;
        }

        // ---------------- DEPARTMENT ----------------
        case 3:
        {
            cout << "\n----- DEPARTMENT INFORMATION -----\n";

            cout << "1. Computer Science\n";
            cout << "2. Software Engineering\n";
            cout << "3. Artificial Intelligence\n";

            cout << "Enter Department: ";
            cin >> subChoice;

            switch (subChoice)
            {
                case 1:
                    cout << "\nComputer Science\n";
                    cout << "Duration: 4 Years\n";
                    cout << "Major: Programming and Computing\n";
                    break;

                case 2:
                    cout << "\nSoftware Engineering\n";
                    cout << "Duration: 4 Years\n";
                    cout << "Major: Software Development\n";
                    break;

                case 3:
                    cout << "\nArtificial Intelligence\n";
                    cout << "Duration: 4 Years\n";
                    cout << "Major: AI and Machine Learning\n";
                    break;

                default:
                    cout << "Invalid Department!\n";
            }

            break;
        }

        // ---------------- SCHOLARSHIP ----------------
        case 4:
        {
            cout << "\n----- SCHOLARSHIP CHECK -----\n";

            cout << "Enter your marks: ";
            cin >> marks;

            if (marks < 0 || marks > 100)
            {
                cout << "Invalid marks!\n";
            }
            else
            {
                switch (marks / 10)
                {
                    case 10:
                    case 9:
                        cout << "Scholarship: 100%\n";
                        break;

                    case 8:
                        cout << "Scholarship: 75%\n";
                        break;

                    case 7:
                        cout << "Scholarship: 50%\n";
                        break;

                    case 6:
                        cout << "Scholarship: 25%\n";
                        break;

                    default:
                        cout << "No Scholarship.\n";
                }
            }

            break;
        }

        // ---------------- EXIT ----------------
        case 5:
            cout << "\nThank you for using University Portal!\n";
            break;

        default:
            cout << "\nInvalid Main Menu Choice!\n";
    }

    return 0;
}