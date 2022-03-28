#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int i,n,fact=1;
    cout<<" enter no of which u want factorial ";
    cin>>n;
    while(n)
    {
       fact=fact*n;
       n--;
    }
   cout<<fact;
    getch();
}
