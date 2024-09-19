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
    person p1;
    cout << "enter detail of person  : " << endl;
    // cin>>p1.name;
    // cin>>p1.age;
    // //cin>>p1.salary;

    // cout<<"detail of per son  are as follows : "<<endl;

    // cout<<"name : "<<p1.name<<endl;
    // cout<<"age : "<<p1.age<<endl;cout
    // cout<<"salary : "<<p1.salary<<endl;

    person *ptr = &p1;
    cin >> ptr->name;
    cin >> ptr->age;
    cin >> ptr->salary;

    cout << "name : " << ptr->name << endl;
    cout << "age : " << ptr->age << endl;
    cout << "salary : " << ptr->salary << endl;

    return 0;
}