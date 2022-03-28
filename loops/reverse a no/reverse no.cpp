#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    int i,n,k,no=0;
    cout<<" enter no of which u want reverse ";
    cin>>n;
    while(n)
    {
        k=n%10;
        no=no*10+k;
        n=n/10;
    }
    cout<<" no is "<<no;
    getch();
}
