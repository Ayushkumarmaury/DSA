#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cout << "enter the value of x:" << endl;
    cin >> x;
    cout << "enter the value of y:" << endl;
    cin >> y;
    if (x < y)
    {
        cout << "x is less than y" << endl;
    }
    else if (y < x)
    {
        cout << "y is less than x " << endl;
    }

    else if (x = y)
    {
        cout << "x is equal to y" << endl;
    }

    return 0;
}
