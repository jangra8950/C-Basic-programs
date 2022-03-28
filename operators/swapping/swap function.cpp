#include<conio.h>
#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
 main()
{
    int a,b;
    cout<<" enter two numbers "<<endl;
    cin>>a>>b;
    cout<<"a is "<<a<<" "<<" b is "<<b<<endl;
    swap(&a,&b);
    cout<<"a is "<<a<<" "<<" b is "<<b<<endl;
    getch();
}
