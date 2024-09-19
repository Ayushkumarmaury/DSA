/***************************************************************
* This program shows how to use some of the numeric functions
*
* defined in the <cmath> header file.
*
***************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main ( )
{
// abs function with two different arguments
cout << "abs (8) = " << abs (8) << endl;
cout << "abs (−8) = " << abs (-8) << endl;
// floor and ceil functions with the same argument
cout << "floor (12.78) = " << floor (12.78) << endl;
cout << "ceil (12.78) = " << ceil (12.78) << endl;
// log and log10 functions
cout << "log (100) = " << log (100) << endl;
cout << "log10 (100) = " << log10 (100) << endl;
// exp and pow functions
cout << "exp (5) = " << exp (5) << endl;
cout << "pow (2, 3) = " << pow (2,3) << endl;
// sqrt function
cout << "sqrt (100) " << sqrt (100);
return 0;
}