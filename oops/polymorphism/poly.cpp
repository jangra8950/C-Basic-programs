
#include<conio.h>
#include<iostream>
using namespace std;
class car
{
public:
   virtual void display()=0;         // this is pure virtual function to achieve polymorphism and this class is called abstract class.
                                                   //  abstract class does not have any object.
  //  {
   //     cout<<" display of car class "<<endl;
   // }
};
class swift : public car
{
public:
    void display()
    {
        cout<<" display of swift class ";
    }
};
class honda : public car
{
public:
    void display()
    {
        cout<<" display of honda class ";
    }
};
int main ()
{
    car *p=new swift();
    p->display();  //  by single instruction different functions called
    p=new honda();
    p->display();  // thats polymorphism
    getch();
}
