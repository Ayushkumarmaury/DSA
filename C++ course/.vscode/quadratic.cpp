/***************************************************************
* This program finds the roots of the quadratic equations
*
***************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main ( )
{
// Declaration of variables
int a, b, c;
double D;
// Inputting the value of three coefficients
cout << "Enter the value of coefficient a: ";
cin >> a;
cout << "Enter the value of coefficient b: ";
cin >> b;
cout << "Enter the value of coefficient c: ";
cin >> c;
// Calculating the value of term (b2 − 4ac)
D = pow (b, 2) - 4 * a * c;
if (D < 0 )
{
cout << "There is no root!" << endl;
}
else if (D == 0)
{
cout << "The two roots are equal." << endl;
cout << "x1 = x2 = " << -b / (2 * a) << endl;
}
else
{
cout << "There are two distinct roots: " << endl;
cout << "x1 = " << (-b + sqrt (D)) / (2 * a) << endl;
cout << "x2 = " << (-b - sqrt (D )) / (2 * a) << endl;
}
return 0;
}