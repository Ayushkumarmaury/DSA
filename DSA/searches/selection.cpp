#include <iostream>
using namespace std;

int main()
{

    int arr[] = {13, 1, 23, 2, 67, 45};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[j] < arr[i])
            {
              int t=arr[j];
              arr[j] = arr[i];
              arr[i] = t;
    }
    
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
}}