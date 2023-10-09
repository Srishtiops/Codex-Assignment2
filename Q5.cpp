/*Develop a program that uses a while loop to continuously prompt the user for a password until the correct password is entered. 
(You can decide the correct password)*/

#include<iostream>
using namespace std;

int main()
{
    string password;
    string correctpassword = "Srishti";
    
    cout<<"Enter password"<<endl;
    cin>>password;

    do{
        cout<<"Enter password: ";
        cin>>password;
    }
    while(password!=correctpassword);
    cout<<"correct password";

    return 0;
}
