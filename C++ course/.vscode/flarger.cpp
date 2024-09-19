/***************************************************************
 * This program shows how to define a function to find the
 *
 * larger of any two positive integers given by the user.
 *
 ***************************************************************/
#include <iostream>
using namespace std;
int larger(int f1, int s2)
{
    int max;
    if (f1> s2)
    {
        max = f1;
    }
    else
    {
        max = s2;
    }
    return (max);
}
int main()
{
    // Declaration
    int first, second;
    // Get inputs
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;
    // Function call
    cout << "Larger: " << larger(first, second); // Function call
    return 0;
}