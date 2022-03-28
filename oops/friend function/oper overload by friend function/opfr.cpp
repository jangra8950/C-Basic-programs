
#include<conio.h>
#include<iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;
public:
    void input(int x,int y)
    {
        real=x;
        img=y;
    }
   void display ()
   {
      cout<<" addition of complex are "<<real<<"+"<<img<<"i";
   }
   friend complex operator+(complex,complex);
};
complex operator+(complex a,complex b)  //complex add(complex x)
    {
        complex temp;
        temp.real=a.real+b.real;
        temp.img=a.img+b.img;
        return temp;
    }
int main()
 {
     complex c1,c2,c3;
     c1.input(3,6);
     c2.input(4,5);
     c3=c1+c2;
     c3.display();
    // c3=c1.add(c2);

     getch();
 }
