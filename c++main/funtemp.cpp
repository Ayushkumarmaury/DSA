#include <iostream>
using namespace std;
 
template <class T1, class T2>
float findAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
 
int main()
{
    float avg = findAverage(5.1, 2);
    cout << avg << endl;
}
