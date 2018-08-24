//library
#include<iostream>
//using namespace keyword
using namespace std;
//writing main function
int main()
{
//declaring variables
float x,a,b,c,d,e,f,g,h;
//printing statement
cout << "Enter the full marks of the subjects." ;
cin >> x;
cout << "Enter the marks obtained in Physics." ;
cin >> a;
cout << "Enter the marks obtained in Chemistry." ;
cin >> b;
cout << "Enter the marks obtained in Mathematics." ;
cin >> c;
cout << "Enter the marks obtained in Biology." ;
cin >> d;
cout << "Enter the marks obtained in Computer Science." ;
cin >> e;
//algorithm or arithmetic
f = a+b+c+d+e;
g = f/5;
h = f/(5*x)*100;
//printing the results
cout << "The total marks obtained by the student is " << f <<endl;
cout << "The average marks obtained by the student is " << g <<endl;
cout << "The total percentage secured by the student is " << h <<endl;
return 0;
}
