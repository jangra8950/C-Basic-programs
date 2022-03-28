#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<" enter no upto which you want odd no in reverse ";
    cin>>n;
    while(n)
    {
        cout<<2*n-1<<" ";
        n--;
    }
    getch();
}
