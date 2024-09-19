#include <iostream>
using namespace std;
int main()
{
    int x, y, t;
    cout << "enter the value of x :" << endl;
    cin >> x;
    cout << "enter the value of y :" << endl;
    cin >> y;
    /* x = 2;
     y = 3;*/
    cout << "before swapping :" << endl;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;

    t = x;
    x = y;
    y = t;

    cout << "after swapping :" << endl;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;

    return 0;
}