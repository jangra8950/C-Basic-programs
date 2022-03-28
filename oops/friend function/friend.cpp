#include<conio.h>
#include<iostream>
using namespace std;
class real;
class integer
{
private:
    int a;
public:
    void input(int x)
    {
        a=x;
    }
    friend void add(integer,real);
};
class real
{
private:
    float b;
public:
    void input(float x)
    {
        b=x;
    }
    friend void add(integer,real);
};
   void add(integer c1,real c2 )
   {
       cout<<"sum is "<<c1.a+c2.b;
   }
 int main()
 {
     integer x;
     real y;
     x.input(5);
     y.input(3.7);
     add(x,y);
     getch();
 }
