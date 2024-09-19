#include <iostream>
using namespace std;
int main()
{

  float arr[2][3];
  cout << "Enter the array elements : " << endl;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> arr[i][j];
    }
  }

  cout << "your 2d array : " << endl;

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (arr[i][j] == 3)
      {
        cout << "index is: " << i << " " << j << endl;
      }
    }
  }

  int rs = 0, re = 1, cs = 0, ce = 2;
  while (rs <= re && cs <= ce)
  {

    // for row start
    for (int i = cs; i <= ce; i++)
    {
      cout << arr[rs][i] << endl;
    }
    rs++;

   
    // for col end
    for (int j = rs; j <= re; j++)
    {
      cout << arr[j][ce] << endl;
    }
    ce--;



    // for col start
    for (int j = re; j >= rs; j--)
    {
      cout << arr[j][cs] << endl;
    }
    cs++;




    // for row end
    for (int i = ce; i >= cs; i--)
    {
      cout << arr[re][i] << endl;
    }
    re--;


  }
    return 0;
}