#include <iostream>
using namespace std;
int main(){
    int age , Weight;
    char ticket , passport , clearance;
    cout << "Airport Security System : " << endl;
    cout << "Enter your age : ";
    cin >>  age;
    cout << "Enter your Ticket Valid/Invalid (Y/N) : ";
    cin >> ticket;
    cout << "Enter your Passport Valid/Invalid (Y/N) : ";
    cin >> passport;
    cout << "Enter your Baggage Weight : ";
    cin >> Weight;
    cout << "Enter your Security Clearance (Y/N) : ";
    cin >> clearance;
    
     if(ticket == 'Y'){
        if(passport == 'Y'){
           if(clearance == 'Y'){
              if(Weight <= 23){
                 if(age >= 18){
                    cout << "Boarding Allowed" << endl;
                 }else{cout << "Minor Passenger – Additional Verification" << endl;}
              }else{
                    if(Weight <= 30){
                    cout << "Extra Baggage Fee" << endl;
                    }else{cout << "Baggage Limit Exceeded" << endl;}
              }
           }else{cout << "Security Clearance Failed" << endl;}
        }else{cout << "Invalid Passport" << endl;}
     }else{cout << "Invalid Ticket" << endl;}
     
     return 0;
    }
