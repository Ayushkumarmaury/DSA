#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout << "entre any three no. :" << endl;
  cin >> a >> b >> c;

  if ((a > b && a > c) && (b > c))
  {
    cout << "the largest no. is :" << a << endl;
    cout << "the smallest no. is :" << c << endl;
  }
  /*else if ((b > a && b > c) && (c > a))
  {
    cout << "the largest no. is :" << b << endl;
    cout << "the smallest no. is :" << a << endl;
  }
  else if ((c > a && c > b) && (a > b))
  {
    cout << "the largest no. is :" << c << endl;
    cout << "the smallest no. is :" << b << endl;
  }*/
  return 0;
}
