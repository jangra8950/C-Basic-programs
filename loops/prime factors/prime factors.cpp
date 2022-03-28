#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int i,n;
    cout<<" enter no to get prime factors ";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
           cout<<i<<" ";
            n=n/i;
        }
    }
    getch();
}
