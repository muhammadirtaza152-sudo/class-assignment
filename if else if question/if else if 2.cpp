#include <iostream>
using namespace std;
int main(){
    int amount , distance ,delivery, Totalamount;
    cout << "Enter your amount" << endl;
    cin >> amount ;
    cout << "Enter the distance" << endl;
    cin >> distance;
    if(amount >= 3000){
        delivery = 0;
    }else if(amount <= 2999 && amount >= 1500){
        delivery = 100;
    }else if(amount < 1499 && amount >= 1){
        delivery = 200;
    }else{
        cout << "The data invalid" << endl;
    }
    if (distance > 10){
        delivery = delivery + 100;
    }
    Totalamount = delivery + amount;
    cout << "The Totalamount is " << endl << Totalamount << endl;

    return 0;
    }
