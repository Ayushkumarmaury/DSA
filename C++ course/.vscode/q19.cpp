
//  Determine  Palindrome number

#include <iostream>
using namespace std;
int main()
{
    int n, r, s = 0, t;
    cout << " Enter the number : " << endl;
    cin >> n;
    t = n;
    while (n != 0)
    {
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }
    if (t == s)
    {
        cout << "  Palindrome number " << endl;
    }
    else
    {
        cout << " not a Palindrome number  " << endl;
    }

    return 0;
}