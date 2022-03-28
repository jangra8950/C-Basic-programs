
#include<conio.h>
#include<iostream>
using namespace std;
class integer
{
public:
    void display()
    {
        cout<<" display of parent class "<<endl;
    }
};
class real : public integer
{
public:
    void display()
    {
        cout<<" display of child class ";
    }
};
int main ()
{
    integer i;
    i.display();
    real r;
    r.display();
    getch();
}
