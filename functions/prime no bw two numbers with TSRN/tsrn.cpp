#include<iostream>
#include<conio.h>
using namespace std;

int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
     if(n%i==0)
        return 0;
    }
    return 1;
}
void rangeprime(int i,int u)
{
    int x;
    for(x=i+1;x<u;x++)
        if(prime(x))
        cout<<x<<" ";
}
int main()
{
    int a,b;
    cout<<" enter two no ";
    cin>>a>>b;
    rangeprime(a,b);
    getch();
}
