// pass by value

#include <iostream>
using namespace std;
/*void passbyvalue(int x , int y){
     int t=x;
     x=y;
     y=t;
 }     */

// pass by reference

/*void passbyreference(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
}       */

// pass by address 

void passbyaddress(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
int main()
{
    int a = 2, b = 4;
    cout << "before swapping :"
         << "a :" << a << endl
         << "b :" << b << endl;
    passbyaddress(&a, &b);
    cout << "after swapping :"
         << "a :" << a << endl
         << "b :" << b << endl;
    return 0;
}