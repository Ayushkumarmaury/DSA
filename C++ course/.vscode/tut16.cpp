#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "enter any two no." << endl;
    cin >> a >> b;
    if (a < b)
    {
        cout << "the greatest no. is :" << b << endl;
    }
    else if (a > b)
    {
        cout << "the greatest no. is :" << a << endl;
    }
    else if (a = b)
    {
        cout << "both no. are equal" << endl;
    }

    return 0;
}
