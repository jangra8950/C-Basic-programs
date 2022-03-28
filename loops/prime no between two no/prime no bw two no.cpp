#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    int i,b,a,n;
    cout<<" enter two no to find prime no between them ";
    cin>>a>>b;
    for(n=a+1;n<b;n++)
    {
        for(i=2;i<n;i++)
       {
          if(n%i==0)
            break;
        }
            if(n==i)
             cout<<n<<" ";
    }
    getch();
}
