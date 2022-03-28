#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    int i=1,n;
    cout<<" enter the no upto which you want to square ";
    cin>>n;
    while(n)
    {
        cout<<i*i<<" ";
        i++;
        n--;
    }
    getch();
}
