#include<iostream>
using namespace std;
int main()
{
    int unit;
    cout<<"Enter unit";
    cin>>unit;
    if(unit >=1 && unit <=100 )
    {
        unit=5*unit;
        cout<<"unit = "<<unit;
    }
    else if(unit >=101 && unit<=200)
    {
        unit=7*unit;
        cout<<"unit = "<<unit;
    }
    else if(unit >=201)
     {
        unit=10*unit;
        cout<<"unit = "<<unit;
    }
    else{
        cout<<"wrong input";
    }
}