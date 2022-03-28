#include<conio.h>
#include<iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;
public:
    void input(int a,int b)
    {
        real=a;
        img=b;
    }
    void display()
    {
        cout<<" addition of complex are "<<real<<"+"<<img<<"i";
    }
    complex operator+(complex x)  //complex add(complex x)
    {
        complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
};
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
