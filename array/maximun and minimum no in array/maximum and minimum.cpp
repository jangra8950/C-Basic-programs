#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    int n,i,a[20];
    int max,min;
    cout<<" enter a no for no of elements ";
    cin>>n;
    cout<<" enter "<<n<<"numbers ";
    for(i=0;i<n;i++)
        cin>>a[i];
   max=a[0];
   min=a[0];
   for(i=1;i<n;i++)
   {
       if(max<a[i])
        max=a[i];
       else if(min>a[i])
        min=a[i];
   }
   cout<<" maximum no is"<<" "<<max<<endl;
   cout<<" minimum no is"<<" "<<min;
    getch();
}
