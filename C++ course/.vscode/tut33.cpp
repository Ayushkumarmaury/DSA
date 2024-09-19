#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enet the value of n:" << endl;
    cin >> n;
    char al = 'a';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << al++;
        }
        cout << endl;
    }

    return 0;
}