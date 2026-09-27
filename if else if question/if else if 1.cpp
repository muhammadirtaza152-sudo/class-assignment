#include <iostream>
using namespace std;
int main(){
    int fee , dayslate , fine , Totalfee;
    cout << "Enter your fee amount" << endl;
    cin >> fee ;
    cout << "Enter the dayslate" << endl;
    cin >> dayslate;
    if(dayslate == 0){
        fine = 0;
    }else if(dayslate <= 7 && dayslate >= 1){
        fine = 500;
    }else if(dayslate <= 15 && dayslate >= 8){
        fine = 1000;
    }else if(dayslate > 15){
        fine = 2000;
    }else{
        cout << "The data invalid" << endl;
    }
    Totalfee = fee + fine;
    cout << "The Fine is " << endl << fine << endl;
    cout << "The Total fee is " << endl << Totalfee << endl;

    return 0;
    }
