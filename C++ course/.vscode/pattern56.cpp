/*


                         *   *   *
                          *  *  *
                           * * *
                            ***
                         *********
                            ***
                           * * *
                          *  *  *
                         *   *   *


                                             */


#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (i == 5 || j == 5 || j == i || j == 10- i )
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}