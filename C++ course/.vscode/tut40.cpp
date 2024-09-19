#include <iostream>
using namespace std;
int main()
{
    int var, n;
    cout << "enter the value of var :" << endl;
    cin >> var;
    int *ip;
    ip = &var;
    cout << "varuable value :" << var << endl;
    cout << "address in pointer :" << ip << endl;
    cout << "pointer pointing the value is :" << *ip << endl;
 
    cout << "enter the value of n :" << endl;
    cin >> n;
    *ip = n;

    cout << "varuable value :" << var << endl;
    cout << "address in pointer :" << ip << endl;
    cout << "pointer pointing the value is :" << *ip << endl;
    return 0;
}