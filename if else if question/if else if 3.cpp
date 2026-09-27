#include <iostream>
using namespace std;
int main(){
    float matric , inter , test , interview , aggregate ;
    int domicile , age ; 
    cout << "Enter your matric marks (%) : " << endl; 
    cin >> matric;
    cout << "Enter your inter marks (%) : " << endl; 
    cin >> inter;
    cout << "Enter your test marks (%) : " << endl; 
    cin >> test;
    cout << "Enter your interview marks (%) : " << endl; 
    cin >> interview;
    cout << "Enter your domicile (1 = punjab , 2 = other) : " << endl; 
    cin >> domicile;
    cout << "Enter your age : " << endl; 
    cin >> age;   
    if(age <= 17 || age >= 25){
           cout << "Invalid age " << endl;
    }else if(inter < 50 ){
          cout << "The marks are below 50 " << endl;
    }else if(matric < 50){
          cout << "The marks are below 50 " << endl;
    }else if(test < 50){
          cout << "The marks are below 50 " << endl;
    }else if(interview< 50){
          cout << "The marks are below 50 " << endl;
    }else{
          aggregate = (inter * 0.30) +(matric * 0.10) + (test * 0.40) + (interview * 0.20);
          cout << "Aggregate " << aggregate << "%" << endl;
          
         if(domicile == 1){
                     
          if(aggregate >= 85){
                       cout << "Scholarship + admission done" << endl;
          }else if(aggregate >= 75){
                cout << "Admission Done" << endl;
          }else if(aggregate >= 65){
                cout << "Wating list" << endl;
          }else{
          cout << "Rejected adnission" << endl;
          }
         }else if(domicile == 2){
                     
          if(aggregate >= 90){
                       cout << "Scholarship + admission done " << endl;
          }else if(aggregate >= 80){
                cout << "Admission Done" << endl;
          }else if(aggregate >= 70){
                cout << "Wating list" << endl;
          }else{
          cout << "Rejected admission" << endl;
          }
         }else {
         cout << "Invalid domicile" << endl;
         }
    }
    return 0;
    }
