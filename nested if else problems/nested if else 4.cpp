#include <iostream>
using namespace std;
int main(){
    int dayslate ;
    char booktype , student , bookdamaged;
    cout << "Library Fine System : " << endl;
    cout << "Enter the Days late : ";
    cin >>  dayslate;
    cout << "Enterthe Book type (R = Regular, T = Textbook, V = Reference) : ";
    cin >> booktype;
    cout << "Enter Student (Y/N)) : ";
    cin >> student;
    cout << "Enter the Book damaged (Y/N) : ";
    cin >> bookdamaged;
     
    if(bookdamaged == 'Y'){
      if(student == 'Y'){
         if(dayslate > 10){
            cout << "Fine + Damage Charges" << endl;
            }else{cout << "Damage Charges" << endl;}
         }else{cout << "Full Damage Charges" << endl;}
      }else{
            if(dayslate <= 7){
              if(student == 'Y'){
                cout << "Low Fine" << endl;
                }else{cout << "Normal Fine" << endl;}
              }
            else{
                  if(booktype == 'R'){
                     cout << "High Fine" << endl;         
                    }else{cout << "Maximum Fine" << endl;}
                  }
           }
     return 0;
    }
