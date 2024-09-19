#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    float n;
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, FOREGROUND_GREEN);
    cout << "enter the number :" << endl;
    cin >> n;
    for (int i = 0; i <= n;)

    {
        cout << " HYEJIN SONG    HYEJIN SONG    HYEJIN SONG     HYEJIN SONG    HYEJIN SONG        HYEJIN SONG     HYEJIN SONG    HYEJIN SONG          HYEJIN SONG     HYEJIN SONG    HYEJIN SONG       " << endl;
    }

    return 0;
}