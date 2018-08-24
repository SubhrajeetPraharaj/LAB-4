//library
#include<iostream>
//using namespace keyword
using namespace std;
//writing main function
int main()
{
//declaring variables
float a,b;
//printing statement
cout << "Enter the temperature in Fahrenheit." ;
//reading the value
cin >> a;
//algorithm or arithmetic
b=5*(a-32)/9;
//printing the results
cout << "The value of " << a << "F in Celcius is " << b <<endl;
return 0;
}
