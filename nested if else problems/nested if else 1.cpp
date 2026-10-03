#include <iostream>
using namespace std;
int main(){
    int age , experience , rentaldays;
    char licence , category;
    cout << "Car Rental System : " << endl;
    cout << "Enter your age : ";
    cin >>  age;
    cout << "Enter your Experience : ";
    cin >> experience;
    cout << "Enter your Rental Days : ";
    cin >> rentaldays;
    cout << "Enter your Licence valid or Invalid (Y/N) : ";
    cin >> licence;
    cout << "Enter your Car Category (L/N/E) : ";
    cin >> category;
    
     if(licence == 'Y'){
        if(age >= 25){
           if(experience >= 3){
              if(category == 'L'){
                 if(rentaldays >= 7){
                    cout << "Luxury Car Approved with Discount" << endl;
                 }else{cout << "Luxury Car Approved" << endl;}
              }else{cout << "Normal Car Approved" << endl;}
           }else{cout << "Experience Too Low" << endl;}
        }else{
              if(age >= 21){
                 if(category == 'E'){
                    cout << "Economy Car Approved" << endl;
                     }else{cout << "Only Economy Car Approved" << endl;}
                 }else{cout << "Age Requirenment Not Met" << endl;}
              }
     }else{cout << "Rental Rejected" << endl;}
     
     return 0;
    }
