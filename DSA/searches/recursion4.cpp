// factorial of given number
#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * fact(n-1);
}

int main()
{
    int n;
    cout << "Enter your number : ";
    cin >> n;
    cout << fact(n);

    return 0;
}