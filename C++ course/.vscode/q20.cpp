
// finding armstrong number

#include <iostream>
using namespace std;
int main()
{
    int n, r, s = 0 , t;
    cout << " Enter the number : " << endl;
    cin >> n;
    t = n ;
    while (n != 0)
    {
        r = n % 10;
        s = s + r*r*r ;
        n = n / 10;
    }
    if (t == s)
    {
        cout << "  Armstrong number " << endl;
    }
    else
    {
        cout << " not a Armstrong number  " << endl;
    }

    return 0;
}