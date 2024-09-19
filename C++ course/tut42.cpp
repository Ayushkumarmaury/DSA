     //inline function

#include <iostream>
using namespace std;
inline int add(int a, int b)
{
    return (a + b);
}
int main()
{
    cout << "addation of two no. is :" << add(4, 5);
    return 0;
}