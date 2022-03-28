#include<conio.h>
#include<iostream>
using namespace std;
class car;
class engine
{
private:
    int a=10;
public:

    friend car;
};
class car     // car class has A relation with engine class.
{
public:
    engine c;
    void fun()
    {
        cout<<c.a;
    }
};
int main()
{
    car c;
    c.fun();
    getch();
}
