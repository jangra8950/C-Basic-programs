#include<conio.h>
#include<iostream>
using namespace std;

main()
{
    int n;
    cout<<" enter no upto which you want natural no in reverse ";
    cin>>n;
    while(n)
    {
        cout<<n<<" ";
        n--;
    }
    getch();
}
