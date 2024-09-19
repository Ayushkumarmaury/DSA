#include <iostream>
using namespace std;
class iteam
{
    static int count;
    int number;

public:
    void getdata(int x)
    {
        number = x;
        count++;
    }
    void getcount(void)
    {
        cout << "count";
        cout << count << "\n";
    }
};
int iteam::count;
int main()
{
    iteam a, b, c;
    a.getdata();
    b.getdata();
    c.getdata();

    a.getdata(1);
    b.getdata(2);
    c.getdata(3);
    cout << "after reading data : "
         << "\n";
    // a.getdata();
    // b.getdata();
    // c.getdata();
    return 0;
}