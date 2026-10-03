#include <iostream>
using namespace std;
int main(){
    int budget , price , ram , storage ;
    char warranty;
    cout << "Mobile Phone Purchase System : " << endl;
    cout << "Enter your Budget : ";
    cin >>  budget;
    cout << "Enter the Phone Price : ";
    cin >> price;
    cout << "Enter the RAM : ";
    cin >> ram;
    cout << "Enter the Storage : ";
    cin >> storage;
    cout << "Enter the Warranty Required (Y/N): ";
    cin >> warranty;
    
     if(budget >= price){
        if(ram >= 8){
           if(storage >= 256){
              if(warranty == 'Y'){
                 if(price < 100,000){
                    cout << "Purchase with Warranty" << endl;
                 }else{cout << "Premium Purchase with Warranty" << endl;}
              }else{cout << "Purchase without Warranty" << endl;}
           }else{cout << "Storage Too Low" << endl;}
        }else{
              if(ram >= 6){
                    cout << "Basic Purchase" << endl;
                 }else{cout << "RAM Too Low" << endl;}
              }
     }else{cout << "Insufficient Budget" << endl;}
     
     return 0;
    }
