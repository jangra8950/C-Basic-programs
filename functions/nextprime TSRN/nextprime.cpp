#include<iostream>
#include<conio.h>
using namespace std;
int prime (int n)
{
    int i;
    for(i=2;i<n;i++)
    {
       if(n%i==0)
        return 0;
    }
    return 1;
}
void nextprime(int x)
{
    while(!prime(++x));
        cout<<x;
}
int main()
{
    int n;
    cout<<" enter the no ";
    cin>>n;
    nextprime(n);
    getch();
}
