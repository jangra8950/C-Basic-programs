
#include<conio.h>
#include<iostream>
using namespace std;
void bin(int n)
{
    int a[30];
    int i=0,k;
    while(n)
    {
        k=n%2;
        a[i]=k;
        i++;
        n=n/2;
    }
    for(int j=i-1;j>=0;j--)
        cout<<a[j];
}
int main()
{
    int a;
    cout<<" enter a no to find binary equivalent ";
    cin>>a;
    bin(a);
    getch();
}
