/***************************************************************
* A program finding the current time using time (0) function
*
***************************************************************/
#include <iostream>
#include <ctime>
using namespace std;
int main ( )
{
// Finding elapsed seconds and current second
long elapsedSeconds = time (0);
int currentSecond = elapsedSeconds % 60;
// Finding elapsed minutes and current minute
long elpasedMinutes = elapsedSeconds / 60;
int currentMinute = elpasedMinutes % 60;
// Finding elapsed hours and current hour
long elapsedHours = elpasedMinutes / 60;
int currentHour = elapsedHours % 24;
// Printing current time
cout << "Current time: ";
cout << currentHour << " : " << currentMinute << " : " << currentSecond;
return 0;
}