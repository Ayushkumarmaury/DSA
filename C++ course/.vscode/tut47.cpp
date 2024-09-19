#include <iostream>
using namespace std;
struct person
{
    char name[100];
    int age;
    double salary;
};

int main()
{
    person p1;
    cout << "person 1 details" << endl;
    cout << "enter person name :" << endl;
    cin.getline(p1.name, 100);
    cout << "enter age" << endl;
    cin >> p1.age;
    cout << "enter salary" << endl;
    cin >> p1.salary;

    cout << "person detail are follows" << endl;
    cout << "eperson name :" << p1.name << endl;
    cout << "eperson age :" << p1.age << endl;
    cout << "eperson salary :" << p1.salary << endl;



    person p2;
    cout << "person 2 details" << endl;
    cout << "enter person name :" << endl;
    cin.getline(p2.name, 100);
    cout << "enter age" << endl;
    cin >> p2.age;
    cout << "enter salary" << endl;
    cin >> p2.salary;

    cout << "person detail are follows" << endl;
    cout << "eperson name :" << p2.name << endl;
    cout << "eperson age :" << p2.age << endl;
    cout << "eperson salary :" << p2.salary << endl;
    return 0;
}