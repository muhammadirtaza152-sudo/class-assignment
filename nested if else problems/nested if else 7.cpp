#include <iostream>
using namespace std;
int main(){
    int age, tickets;
    char movie, day, member;
    cout << "Cinema Ticket System : " << endl;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Movie Type (A = Action, C = Comedy, H = Horror) : ";
    cin >> movie;
    cout << "Day (W = Weekend, N = Normal) : ";
    cin >> day;
    cout << "Member? (Y/N): ";
    cin >> member;
    cout << "Number of Tickets: ";
    cin >> tickets;

    if (tickets >= 5)
    {
        if (member == 'Y')
        {
            if (day == 'W')
            {
                cout << "Group + Member Discount";
            }
            else
            {
                cout << "Group Member Discount";
            }
        }
        else
        {
            cout << "Group Discount";
        }
    }
    else
    {
        if (age >= 18)
        {
            if (movie == 'H')
            {
                if (age >= 21)
                {
                    cout << "Horror Allowed";
                }
                else
                {
                    cout << "Horror Not Allowed";
                }
            }
            else
            {
                if (member == 'Y')
                {
                    cout << "Member Discount";
                }
                else
                {
                    cout << "Regular Ticket";
                }
            }
        }
        else
        {
            if (movie == 'C')
            {
                cout << "Minor Allowed";
            }
            else
            {
                cout << "Guardian Required";
            }
        }
    }

    return 0;
}
