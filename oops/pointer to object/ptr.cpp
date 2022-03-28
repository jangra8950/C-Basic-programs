
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
    rectangle *p=new rectangle();   //to create object in heap
   // rectangle r;
   // rectangle *p;
   // p=&r;
    p->length=5;
    p->breadth=8;
    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;
    getch();
}
