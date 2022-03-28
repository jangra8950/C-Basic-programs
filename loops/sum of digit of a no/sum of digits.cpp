#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    int i,n,k,sum=0;
    cout<<" enter no of which u want sum ";
    cin>>n;
    while(n)
    {
        k=n%10;
        sum=sum+k;
        n=n/10;
    }
    cout<<" sum is "<<sum;
    getch();
}
