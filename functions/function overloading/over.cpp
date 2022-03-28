
#include<conio.h>
#include<iostream>
using namespace std;
int maxi(int a,int b)
{
    if(a>b)
        return a;
    else return b;
}
float maxi(float a,float b)
{
    if(a>b)
        return a;
    else return b;
}
int maxi(int a,int b, int c)
{
    if(a>b&&a>c)
        return a;
        else if (c>b)
            return c;
    else return b;
}
int main()
{
    cout<<" maximum number using function overloading ";
    cout<<maxi(10,5)<<endl;
    cout<<maxi(10,13,4)<<endl;
    cout<<maxi(13.4f,52.3f)<<endl;
    getch();
}
