// reverse of string
#include <iostream>
using namespace std;

void reversestr(string &str, int i, int j)
{
    if (i > j)
    {
        return;
    }

    swap(str[i], str[j]);
    reversestr(str, i + 1, j - 1);
}

int main()
{   string str;
    cout<<"enter your string"<<"\t";
    cin>>str;

    reversestr(str, 0, str.length() - 1);
    cout << str << endl;
    return 0;
}