#include <iostream>
using namespace std;
int main()
{
    int q;
    cout << "enter quantity :" << endl;
    cin >> q;
    int c = 200 * q;
    if (c < 5000)
    {
        cout << "the cost is " << c << endl;
    }
    else if (c > 5000)
    {
        cout << "the cost is " << 160 * q << endl;
    }

    return 0;
}
