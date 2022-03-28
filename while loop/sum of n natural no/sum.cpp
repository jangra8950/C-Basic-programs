#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    int n,i=1,sum=0;
    cout<<" enter the no upto which you want to sum ";
    cin>>n;
    while(n)
    {
        sum=sum+i;
        i++;
        n--;
    }
    cout<<" sum is "<<sum;
    getch();
}
