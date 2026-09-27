#include<iostream>
using namespace std;
int main()
{
    string u,p;
    string username="admin";
    string password="1234";
    cout<<"Enter username and password";
    cin>>u;
    cin>>p;
    if(u == username && p == password)
{
        cout<<"Login successfull";
}
    else
{   
        cout<<"Login Failed";
 }


}