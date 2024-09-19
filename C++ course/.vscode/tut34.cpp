#include <iostream>
using namespace std;
inline int pro(int a, int b)
{
  return a * b;
}
int main()
{
  int a, b;
  cout << "enter the value of a and b :" << endl;
  cin >> a >> b;
  cout <<"the multiplication of numbers:"<< pro(a, b);
  // cout << pro(a, b);
  // cout << pro(a, b);
  return 0;
}
