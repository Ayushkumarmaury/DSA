#include <iostream>
using namespace std;
int main()
{
    int n, s, i;
    cout << "enter the value of n : " << endl;
    cin >> n;
    s = 0;

    do
    {
        s = n * (n + 1) / 2;
        i++;
    } while (i <= n);
    cout << "sum is : " << s;

    return 0;
}