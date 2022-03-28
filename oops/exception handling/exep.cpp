
#include<conio.h>
#include<iostream>
using namespace std;
int division(int x, int y)
{
    if(y==0)   // if i use y!=0 return x/y then it always return values having errors
      throw 1;
        return x/y;
}
int main()
{
    int a,b,c;
    cout<<" enter value for division "<<endl;
    cin>>a>>b;
    try
    {
        c=division(a,b);
        cout<<" division "<<c;
    }
    catch(int x)
    {
        cout<<"error division by zero";
    }
    if(c>=1)
    cout<<" congrats ";
    getch();
}
