#include <iostream>
#include <string>
using namespace std;
struct person
{
    string name;
    int age;
    double salary;
};

int main()
{
    person p[2];
    cout << "enter persons detail" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "enter person detail :  " << (i + 1) << endl;
        cin >> p[i].name;
        cin >> p[i].age;
        cin >> p[i].salary;
    }
    cout << "users detail :  " << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "detail of person :  " << (i + 1) << endl;
        cout << "name : " << p[i].name << endl;
        cout << "age : " << p[i].age << endl;
        cout << "salary : " << p[i].salary << endl;
    }

    return 0;
}