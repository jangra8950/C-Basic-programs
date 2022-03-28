#include<iostream>
#include<conio.h>
using namespace std;
 main()
{
    int n,x,a,sum=0;
    cout<<" enter a number ";
    cin>>n;
    a=n;
    while(n)
    {
        x=n%10;
        sum=sum+x*x*x;
        n=n/10;
    }
    if(a==sum)
        cout<<" armstrong number ";
    else
        cout<<" not armstrong number ";
    getch();

}
