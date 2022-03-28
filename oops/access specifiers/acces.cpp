
#include<conio.h>
#include<iostream>
using namespace std;
class integer
{
private:
    int a;
protected:
    int b;
public:
    int c;
    void setdata()
    {
       a=10;
       b=2;
       c=3;
    }
};
class real:public integer
{
public:
    void display()
    {
      //a=13;
      b=5;
      c=6;
      cout<<b<<" "<<c;
    }
  //  private  members cannot be accessible
};
int main()
{
    real c;
    c.display();
    getch();
}
