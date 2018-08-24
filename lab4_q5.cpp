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
cout << "Enter the first angle(in degrees)." ;
//reading the value
cin >> a;
//printing statement
cout << "Enter the second angle(in degrees)." ;
//reading the value
cin >> b;
//algorithm or arithmetic
c= 180-a-b;
//printing the results
cout << "The third angle of the triangle whose angles are " << a<< " and " << b << " is " << c << " degrees."<<endl;
return 0;
}
