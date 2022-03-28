#include<conio.h>
#include<iostream>
using namespace std;
main()
{
   int k,n;
   int a=-1;
   int b=1;
   cout<<" enter the no to get Nth no of fibonacci series ";
   cin>>n;
   while(n)
   {
       k=a+b;
       a=b;
       b=k;
       n--;
   }
   cout<<" no of fibonaci series is "<<k;
   getch();
}
