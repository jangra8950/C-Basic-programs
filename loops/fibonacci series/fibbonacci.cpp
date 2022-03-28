#include<conio.h>
#include<iostream>
using namespace std;
main()
{
   int k,n;
   int a=-1;
   int b=1;
   cout<<" enter the no upto which you want fibonacci series ";
   cin>>n;
   while(n)
   {
       k=a+b;
       cout<<k<<endl;
       a=b;
       b=k;
       n--;
   }
   getch();
}
