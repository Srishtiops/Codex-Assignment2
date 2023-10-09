/*Create a program that takes user input as a floating-point number, 
converts it to an integer using typecasting, and displays both the original and the typecasted values.*/

#include <iostream> 
using namespace std;
int main() 
{ 
    float a;
    int b;
    cout<<"Enter the value in float number: "<<endl; 
    cin>>a;

    b=int(a);
    cout<<"The float value of a is: " <<a<<endl;
    cout<<"The typecasted integer value is: "<<b<<endl;
  
    return 0; 
} 
