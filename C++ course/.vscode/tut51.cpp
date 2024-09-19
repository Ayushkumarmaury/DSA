

#include <iostream>
using namespace std;

class complexnumber
{

private:
    int real;
    float imaginary;

public:
    complexnumber() {}
    complexnumber(int r, float i)
    {
        real = r;
        imaginary = i;
    }
    void displayData()
    {
        cout << " complex number is: " << real << "+" << imaginary << "i" << endl;
    }
    int getRealPart()
    {
        return real;
    }
    float getImaginaryPart()
    {
        return imaginary;
    }
};
complexnumber add2no(complexnumber n1, complexnumber n2)
{
    int r;
    float i;
    r = n1.getRealPart() + n2.getRealPart();
    i = n1.getImaginaryPart() + n2.getImaginaryPart();
    complexnumber temp(r, i);
    return temp;
}

int main()
{
    complexnumber comp1(5, 4), comp2(2, 3), comp3;
    comp1.displayData();
    comp2.displayData();
    cout << "addation of two numbers : " << endl;
    comp3 = add2no(comp1, comp2);
    comp3.displayData();
    cout << "pointer to object call out " << endl;
    complexnumber *ptr1;
    ptr1 = &comp3;
    ptr1->displayData();
    ptr1 = &comp2;
    ptr1->displayData();
    return 0;
}