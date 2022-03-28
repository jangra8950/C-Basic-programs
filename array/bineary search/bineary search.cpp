
#include<conio.h>
#include<iostream>
using namespace std;
void sort(int c[], int n)
{
    int i,r,t;
    for(r=0;r<n-1;r++)
    {
        for(i=0;i<n-1-r;i++)
            if(c[i]>c[i+1])
        {
            t=c[i];
            c[i]=c[i+1];
            c[i+1]=t;
        }
    }
}
void display(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<b[i]<<endl;
}
int main()
{
    int i,n,key;
    int a[20];
    cout<<" enter no to an array  ";
    cin>>n;
    cout<<" enter"<<n<< "numbers ";
    for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,n);
        cout<<"sorted array is"<<endl;
        display(a,n);
        cout<<"enter number to found in array"<<" ";
        cin>>key;
        int l=0,r=n-1,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(key==a[mid])
            {
                cout<<"your number"<<" "<<key<<" "<<"is found at"<<" "<<mid<<"position";
                return 0;
            }
            else if(key<a[mid])
                r=mid-1;
            else
                l=mid+1;
        }
        cout<<"number not found";
        getch();
}
