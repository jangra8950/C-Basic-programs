#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,n,key;
    int a[20];
    cout<<" enter no to an array  ";
    cin>>n;
    cout<<" enter "<<n<< "numbers ";
    for(i=0;i<n;i++)
        cin>>a[i];
        cout<<"enter number to found in array";
        cin>>key;
        for(i=0;i<n;i++)
        {
            if(key==a[i])
            {
                cout<<"your number"<<" "<<key<<" "<<"is found at"<<" "<<i+1<<"position";
                return 0;
            }

        }
            cout<<" number not found";
        getch();

}
