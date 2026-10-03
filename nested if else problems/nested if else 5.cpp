#include <iostream>
using namespace std;
int main(){
    int age , Weight;
    char frequentflyer , internationalflight , tickettype , guardian;
    cout << "Flight Ticket System : " << endl;
    cout << "Enter your Age : ";
    cin >>  age;
    cout << "Enter the Ticket type (E = Economy, B = Business) : ";
    cin >> tickettype;
    cout << "Enter your Baggage weight) : ";
    cin >> Weight;
    cout << "Enter the Frequent Flyer (Y/N)) : ";
    cin >> frequentflyer;
    cout << "Enter the International flight (Y/N) : ";
    cin >> internationalflight;
    cout << "Enter the Guardian (Y/N) : ";
    cin >> guardian;
             
    if(internationalflight == 'Y'){
      if(Weight <= 30){
         if(tickettype == 'B'){
            cout << "International Business Allowed" << endl;
            }else{
                  if(frequentflyer == 'Y'){
                      cout << "Economy + Extra Benefits" << endl;
                     }else{cout << "International Economy" << endl;}
                  }
         }else{
               if(Weight <= 40){
                  cout << "Extra Baggage Charges" << endl;       
                  }else{cout << "Baggage Rejected" << endl;}
               }
      }else{
            if(age >= 12){
              if(Weight <= 20){
                cout << "Domestic Boarding Allowed" << endl;
                }else{cout << "Extra Baggage Charges" << endl;}
              }
            else{
                  if(guardian == 'Y'){
                     cout << "Minor Boarding Allowed" << endl;         
                    }else{cout << "Guardian Required" << endl;}
                  }
           }
     return 0;
    }
