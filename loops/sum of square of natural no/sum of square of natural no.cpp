#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    int i,n,sum=0;
    cout<<" enter no upto which u want sum of squares of no ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    cout<< " sum is "<<sum;
    getch();
}
