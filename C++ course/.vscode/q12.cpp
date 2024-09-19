
//   leap year program


#include <iostream>
using namespace std;
int main()
{
    int y;
    cout << "enter a year : " << endl;
    cin >> y;
    if (y % 400 == 0 && y % 100 == 0 && y % 4 == 0)
    {
        cout << "Leap year " << endl;
    }
    else if (y % 400 != 0 && y % 100 == 0 && y % 4 == 0)
    {
        cout << "not a leap year " << endl;
    }
    else if (y % 400 != 0 && y % 100 != 0 && y % 4 == 0)
    {
        cout << "Leap year " << endl;
    }
    else
    {
        cout << "not a leap year " << endl;
    }

    return 0;
}