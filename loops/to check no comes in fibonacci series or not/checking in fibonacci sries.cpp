#include<conio.h>
#include<iostream>
using namespace std;
main()
{
   int k,n;
   int a=-1;
   int b=1;
   cout<<" enter the given no to check in fibonacci series ";
   cin>>n;
   k=a+b;
   while(k<n)
   {
      a=b;
      b=k;
      k=a+b;
   }
    if(k==n)
        cout<<" YES";
    else
        cout<<" NO";
   getch();
}
