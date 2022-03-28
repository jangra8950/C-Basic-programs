#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int i,n;
    cout<<" enter no to find its factors ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
          cout<<i<<" ";
    }
    getch();
}
