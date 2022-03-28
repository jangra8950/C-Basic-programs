#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int i,n=2,a;
    cout<<" enter no to find prime numbers ";
    cin>>a;
    while(a)
    {
        for(i=2;i<n;i++)
       {
           if(n%i==0)
            break;
        }
            if(n==i)
            {
            cout<<n<<" ";
            a--;
            }
        n++;
    }
    getch();
}
