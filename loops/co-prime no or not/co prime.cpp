#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int min,i,a,b;
    cout<<" enter two no to find they are co-prime or not ";
    cin>>a>>b;
    min=(a<b)?a:b;
    for(i=2;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
            break;
    }
    if(i==min+1)
    cout<<" co-prime numbers ";
    else
        cout<<" not co-prime ";
    getch();
}
