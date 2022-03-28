#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    int i,n,sum=0;
    cout<<" enter the no upto which u want sum of odd no ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
       sum=sum+2*i-1;
    }
    cout<<"sum is "<<sum;
    getch();
}
