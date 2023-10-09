/*Develop a program that calculates the area of a circle using a constant value for pi (π). 
Use appropriate constants for radius and pi.*/

#include<iostream>
using namespace std;

int main()
{
   double r;
   double area;
   const double pi=3.14;

   cout<<"Enter the radius of the circle: "<<endl;
   cin>>r;

   area=pi*r*r;
   cout<<"The are of the circle is: "<<area<<endl;
   
   return 0;
}
