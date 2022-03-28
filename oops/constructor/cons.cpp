
#include<conio.h>
#include<iostream>
using namespace std;

class rectangle
{
  private:
    int length;
    int breadth;
  public:
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    rectangle ()
    {
        length=2;
        breadth=1;   // when the object is created constructor is called and it sets the value to object or.
    }                    //   if we do not create it then complier called default construct
};
int main()
{
    int x;
    rectangle r;
    x= r.area();
    cout<<x;
    getch();
}
