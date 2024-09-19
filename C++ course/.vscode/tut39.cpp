#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter the value of x :" << endl;
    cin >> x;
    cout << "enter the value of y :" << endl;
    cin >> y;
    cout << "before swapping :" << endl;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "after swapping :" << endl;
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;

    return 0;
}