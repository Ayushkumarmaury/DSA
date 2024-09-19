#include <iostream>
using namespace std;
int main()
{
    int size;
    int *ptr;
    cout << "enter the no of values you want to store(size of array):" << endl;
    cin >>  size;
    ptr = new int[size];
    cout << "enter the value to be store in the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }
    cout << "value in the array are:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << endl;
    }

    return 0;
}