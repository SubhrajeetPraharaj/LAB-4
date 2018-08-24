//library
#include<iostream>
//using namespace keyword
using namespace std;
//writing main function
int main()
{
//declaring variables
float a,b,c;
//printing statement
cout << "Enter the base of the triangle." ;
//reading the value
cin >> a;
//printing statement
cout << "Enter the height of the triangle." ;
//reading the value
cin >> b;
//algorithm or arithmetic
c= 0.5*a*b;
//printing the results
cout << "The area of the triangle whose base and height are " << a<< " and " << b << " respectively is " << c << " square units."<<endl;
return 0;
}
