#include <iostream>
using namespace std;
class shape
{
protected:
    int width;
    int height;

public:
    void setwidth(int w)
    {
        width = w;
    }
    void setheight(int h)
    {
        height = h;
    }
};

class rectangle : public shape
{
public:
    int getarea()
    {
        return (width * height);
    }
};

int main(void)
{
    rectangle rect;
    rect.setwidth(5);
    rect.setheight(7);
     cout<<"total area : "<<rect.getarea()<<endl;

    return 0;
}