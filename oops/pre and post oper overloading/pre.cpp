
#include<conio.h>
#include<iostream>
using namespace std;
class interger
{
private:
    int x;
public:
    void input(int a)
    {
        x=a;
    }
    void display()
    {
        cout<<x<<endl;
    }
    interger operator++(int)   //post
    {
        interger temp;
        temp.x=x++;
        return temp;
    }
    interger operator++()    //pre
    {
        interger temp;
        temp.x=++x;
        return temp;
    }
};
 int main()
 {
     interger i1,i2;
     i1.input(3);
     i1.display();
     i2=++i1;         //i1.operator++()
     i2.display();
     i1.display();

     getch();
 }
