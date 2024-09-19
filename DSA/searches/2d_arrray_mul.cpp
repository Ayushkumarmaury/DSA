#include <iostream>
using namespace std;

int main()
{

    int a1[3][4] = {{2, 4, 1, 2}, {8, 4, 3, 6}, {1, 7, 9, 5}};
    int a2[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {4, 5, 6}};

    // cout << "array 1 : " << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << a1[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "array 2 : " << endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << a2[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    int mul[3][3];
    for (int i = 0; i < 3; i++){
        for(int j = 0; j<3; j++){
            mul[i][j]=0;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 4; k++){
                mul[i][j] += a1[i][k]*a2[k][j];
        }
    }}


    cout << "array mul : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
