#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,n,a[20];
    int pos=0;
    int neg=0;
    cout<<"enter no of elements for array";
    cin>>n;
    cout<<"enter"<<" "<<n<<" "<< "elements";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
            pos++;
        else
            neg++;
    }
    cout<<"positive numbers in array are"<<" "<<pos<<endl;
    cout<<"negative numbers in array are"<<" "<<neg<<endl;
    getch();
}
