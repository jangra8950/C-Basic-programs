

#include<conio.h>
#include<iostream>
using namespace std;
int fact(int n)
{
   int x=1,i;
    for(i=1;i<=n;i++)
        x=x*i;
        return x;
}
int comb(int a,int b)
{
    int s;
    int num=fact(a);
    int den=fact(b)*fact(a-b);
    s=num/den;
    return s;
}
int main()
{
    int n,r;
    cout<<" give no to n value in ncr ";
    cin>>n;
    cout<<" give value for r ";
    cin>>r;
    int x=comb(n,r);
    cout<< "nCr is "<<x;
    getch();
}
