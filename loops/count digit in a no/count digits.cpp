#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int i,n,k,d=0;
    cout<<" enter no of which u count digits ";
    cin>>n;
    while(n)
    {
        k=n%10;
        if(k>=0)
        d=d+1;
        n=n/10;
    }
   cout<<" digits are "<<d;
    getch();
}
