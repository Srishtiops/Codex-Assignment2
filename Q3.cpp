/*Write a program that uses manipulators to format and display the current date and time.*/

#include<iostream>
#include <ctime>

using namespace std;

int main() 
{
    time_t systime = time(0);
    char* curtime = ctime(&systime);
    cout << "The current date and time is: "<<curtime<<endl;
    
    return 0;
}

