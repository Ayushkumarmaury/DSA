#include <iostream>
using namespace std;
int main()
{
    int n, f = 1, i = 1;
    cout << "enter the number : " << endl;
    cin >> n;

    do
    {

        f = f * i;
        i++;

    } while (i <= n);
    cout << " factorial value is : " << f;

    return 0;
}