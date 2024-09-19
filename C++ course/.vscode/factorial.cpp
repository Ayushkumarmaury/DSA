
// program for determine factorial of any number

#include <iostream>
using namespace std;
int main()
{
    int n, f, i;
    cout << "enter the number : " << endl;
    cin >> n;
    f = n;
    for (int i = 1; i < n; i++)
    {
        //cout << f << "*" << i << "=";
        f = f * i;
        //cout << f << endl;
    }
    cout << " factorial value is : " << f << endl;

    return 0;
}