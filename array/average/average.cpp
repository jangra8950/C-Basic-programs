#include<conio.h>
#include<iostream>
using namespace std;

int main()
{

    int i,n,k,sum=0;
    float avg;
    cout<< " enter the size of array ";
    cin>>k;
    int a[k];
    cout<<" enter the no to find average\n";
    cin>>n;
    cout<<" enter "<<n<< " numbers\n";
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
        {
            sum= sum+a[i];
        }
        avg= sum/n;
        cout<<" Average is "<<avg;
       getch();
}
