#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char al = 'a';
        for (int j = 1; j <= i; j++)
        {
            cout << al++;
        }
        cout << endl;
    }

    return 0;
}