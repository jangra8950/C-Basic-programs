#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    int i,n;
    cout<<" enter a no to check it is prime or not ";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(n==i)
        cout<<n<<" is prime number";
    else
        cout<<n<<" is not prime ";
    getch();
}
