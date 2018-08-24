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
cout << "Enter the length in centimeters." ;
//reading the value
cin >> a;
//algorithm or arithmetic
b= a/100;
c= b/1000;
//printing the results
cout << "The value of " << a << " cm in meters is " << b <<endl;
cout << "The value of " << a << " cm in kilometers is " << c <<endl;
return 0;
}
