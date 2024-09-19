// function in c++

#include <iostream>
using namespace std;
int max(int a, int b);
int main()
{
    int a, b;
    cout << "enter the two numbers to find the greatest number :" << endl;
    cin >> a >> b;
    int c = max(a , b);
    cout << "the greatest number is :" <<c<< endl;
    return 0;
}
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}