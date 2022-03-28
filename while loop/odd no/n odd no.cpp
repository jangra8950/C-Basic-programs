#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    int n,i=1;
    cout<<" enter no upto which you want odd no ";
    cin>>n;
    while(n)
    {
        cout<<2*i-1<<" ";
        i++;
        n--;
    }
    getch();
}
