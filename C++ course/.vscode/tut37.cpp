#include <iostream>
using namespace std;
int add(int a, int b)
{
    cout << "its a normal calculator." << endl;
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int divs(int a, int b)
{
    return a / b;
}

int main()
{
    int a, b;
    cout << "enter the value a : " << endl;
    cin >> a;
    cout << "enter the value b : " << endl;
    cin >> b;
    cout << "the addation of a and b is : " << add(a, b) << endl;
    cout << "the subtraction of a and b is : " << sub(a, b) << endl;
    cout << "the multiplication of a and b is : " << mul(a, b) << endl;
    cout << "the division of a and b is : " << divs(a, b) << endl;

    return 0;
}