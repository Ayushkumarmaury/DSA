// panlindrome of a word
#include <iostream>
using namespace std;
bool palinndrome(string str, int i, int j)
{
    if (str[i] == str[j])
    {
        return true;
    }

    if (str[i] != str[j])
    {
        return false;
    }

    else
    {
        return palinndrome(str, i + 1, j - 1);
    }
}
using namespace std;
int main()
{
    string str;
    cout << "enter your word : "
         << "\t";
    cin >> str;

    bool p = palinndrome(str, 0, str.length() - 1);

    if (p)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not a palindrome" << endl;
    }

    return 0;
}