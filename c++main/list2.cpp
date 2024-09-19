#include <iostream>
#include <list>
using namespace std;
 
void display(list<int> l)
{
    cout << "The elements are: ";
    for (auto it : l)
    {
        cout << it << " ";
    }
    cout << endl;
}
 
int main()
{
    list<int> l = {1, 2, 3, 4};
    display(l);
    l.pop_back();
    display(l);
    l.pop_front();
    display(l);
}