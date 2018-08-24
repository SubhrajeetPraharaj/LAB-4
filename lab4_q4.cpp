//library
#include<iostream>
//using namespace keyword
using namespace std;
//writing main function
int main()
{
//declaring variables
float a;
int b,c;
//printing statement
cout << "Enter the number of days." ;
//reading the value
cin >> a;
//algorithm or arithmetic
b=a/365;
c=a/7;
//printing the results
cout << "The " << a << " days corresponds to " << b << " years."<<endl;
cout << "The " << a << " days corresponds to " << c << " weeks."<<endl;
return 0;
}
