#include <iostream>
using namespace std;
int main()
{
    float m;
    cout << "enter your marks :" << endl;
    cin >> m;
    if (m < 25)
    {
        cout << "Fail" << endl;
    }
    else if (m > 25 && m <= 60)
    {
        cout << "Grade E" << endl;
    }
    else if (m > 60 && m <= 70)
    {
        cout << "Grade D" << endl;
    }
    else if (m > 70 && m <= 80)
    {
        cout << "Grade c" << endl;
    }
    else if (m > 80 && m <= 90)
    {
        cout << "Grade B" << endl;
    }
    else if (m > 90 && m <= 100)
    {
        cout << "Grade A" << endl;
    }

    return 0;
}
