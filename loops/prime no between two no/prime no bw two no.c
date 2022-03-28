#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    int i,b,a,n;
    printf(" enter two no to find prime no ");
    scanf("%d%d",&a,&b);
    for(n=a+1;n<=b-1;n++)
    {
        for(i=2;i<n;i++)
       {
        if(n%i==0)
            break;
        }
            if(n==i)
             printf(" %d ",n);
    }
    getch();
}
