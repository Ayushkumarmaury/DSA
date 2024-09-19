#include <iostream>
using namespace std;
int main()
{
  float f, c;
  cout << "enter the temperature in fahrenheit :"<< endl;
  cin >> f;
  c = (f - 32) / 1.8;
  cout << "temperature in celcius :" <<endl;
  cout<<c;
  

  return 0;
}
