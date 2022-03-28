
#include<conio.h>
#include<iostream>
using namespace std;
class integer
{
public:

    int a;
    void display()
    {
        cout<<a<<endl;
    }

};
class real:public integer
{
public:
    float b;
    void show()
    {
        cout<<b<<" "<<a;
    }
};
int main()
{
    integer x;
    x.a=10;
    x.display();
    real y;
    y.a=45;
    y.b=3.5;
    y.display();
    y.show();
    getch();
}
