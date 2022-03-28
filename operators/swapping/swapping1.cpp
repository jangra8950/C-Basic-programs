#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    int a,b,c;
    cout<<" enter the two no for swapping ";
    cin>>a>>b;
    cout<<"a is "<<a<<" "<<" b is "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<" After swapping ";
    cout<<"a is "<<a<<" "<<" b is "<<b<<endl;
    getch();
}
