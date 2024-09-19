/***************************************************************
* A program that changes every lowercase letter to an uppercase
*
* letter and counts the alphabetic characters.
*
***************************************************************/
#include <iostream>
#include <cctype>
using namespace std;
int main ( )
{
// Declaration
char ch;
int count = 0;
// Inputting characters and processing
cout << "enter character"<<endl;
cin >> ch;
while (cin >> noskipws >> ch)
{
if (isalpha (ch))
{
count++;
}
ch = toupper (ch);
cout <<"upper case"<<ch<<endl;
}
// Printing the count of characters
cout << "The count of alphabetic characters is: " << count;
return 0;
}