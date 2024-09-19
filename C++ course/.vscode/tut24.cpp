#include <iostream>
using namespace std;
int main()
{
    int i, j, k;

    for (i = 0; i <= 25; i++)
    {
        for (j = 25; j > i; j--)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << " *";
        }
        cout << "\n ";
    }

    return 0;
}
