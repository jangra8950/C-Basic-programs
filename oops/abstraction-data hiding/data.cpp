
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
    void input()
    {
        int a,b;
        cout<<" enter two values for rectangle "<<endl;
        cin>>a>>b;
        if(a&&b>0)    // by this way we can control on user input and secure our data so that user not enter wrong value
        {
          length=a;
          breadth=b;
        }
        else
            cout<<" you entered wrong values "<<endl;
    }

};
int main()
{
    int x,y;
    rectangle r;
    r.input();
    x= r.area();
    y=r.perimeter();
    if(x&&y>0)
    {
       cout<<" area is "<<x<<endl;
       cout<<" perimeter is "<<y<<endl;
    }
    else
        cout<<" please check your values ";
    getch();
}
