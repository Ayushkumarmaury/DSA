/***************************************************************
* A simple program to show that if all three necessary
*
* conditions are fulfilled, we have polymorphism.
*
***************************************************************/
#include <iostream>
#include <string>
using namespace std;
// Definition of Base class and in-line definition for print function
class Base
{
public:
virtual void print () const {cout << "In the Base" << endl;}
};
// Definition of Derived class and in-line definition for print function
class Derived : public Base
{
public:
virtual void print () const {cout << "In the Derive" << endl;}
};
int main ( )
{
// Creation of a pointer to the Base class (simulating socket)
Base* ptr;
// Let ptr point to an object of the Base class
ptr = new Base ();

ptr -> print();
delete ptr;
// Let ptr point to an object of the Derived class
ptr = new Derived();
ptr -> print();
delete ptr;
return 0;
}   