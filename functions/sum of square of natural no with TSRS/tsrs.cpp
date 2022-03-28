#include<iostream>
#include<conio.h>
using namespace std;
int sum (int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
        sum=sum+i*i;
    return sum;
}
int main()
{
    int n,s;
    cout<<" enter no to find sum of square of natural no ";
    cin>>n;
    s=sum(n);
    cout<< " sum is "<<s;
    getch();
}

