#include<conio.h>
#include<iostream>
using namespace std;
int maxi(int a,int b, int c=0)  //here c is default
{
    if(a>b&&a>c)
        return a;
        else if (c>b)
            return c;
     else return b;
}
int main()
{
    cout<<" maximum number using default arguments ";
    cout<<maxi(18,5)<<endl;
    cout<<maxi(10,13,4)<<endl;
    cout<<maxi(13.4f,52.3f)<<endl;   //takes int value
    getch();
}
