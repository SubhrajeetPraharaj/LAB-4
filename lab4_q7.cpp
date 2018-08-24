//library
#include<iostream>
#include<cmath>
//using namespace keyword
using namespace std;
//writing main function
int main()
{
//declaring variables
float a,b;
//printing statement
cout << "Enter the side of the equilateral triangle." ;
//reading the value
cin >> a;
//algorithm or arithmetic
b= pow(3,0.5)/4*pow(a,2);
//printing the results
cout << "The area of the equilateral triangle whose side is " << a << " is " << b << " square units."<<endl;
return 0;
}
