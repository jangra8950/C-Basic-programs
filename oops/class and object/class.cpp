#include<conio.h>
#include<iostream>
using namespace std;

class rectangle
{
    public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    int x,y;
    rectangle r;
    r.length=10;
    r.breadth=5;
    x=r.area();
    y=r.perimeter();
    cout<<x<<endl;
    cout<<y<<endl;
    getch();
}
