#include<conio.h>
#include<iostream>
using namespace std;

main()
{

    int n,i=1;
    cout<<" enter no upto which you want natural no ";
    cin>>n;
    while(n)
    {
        cout<<i<<" ";
        i++;
        n--;
    }
    getch();
}
