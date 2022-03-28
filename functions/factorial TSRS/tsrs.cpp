#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n)
{
    int x=1,i;
    for(i=1;i<=n;i++)
        x=x*i;
        return x;
}
int main()
{
    int a,n;
    cout<<" enter the no to calculate factorial ";
    cin>>n;
    a=fact(n);
    cout<< " factorial is "<<a;
    getch();
}

