#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    int i,a,n;
    cout<<" enter no to find next prime no ";
    cin>>n;
    for(a=n+1;;a++)
    {
        for(i=2;i<a;i++)
        {
           if(a%i==0)
            break;
        }
            if(a==i)
            {
               cout<<a<<" ";
               break;
            }
    }
    getch();
}
