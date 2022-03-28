#include<conio.h>
#include<iostream>
using namespace std;

main()
{
    int a,b;
    cout<<" enter two no for swapping ";
    scanf("%d %d",&a,&b);
    cout<<"a is "<<a<<" "<<" b is "<<b<<endl;
    b=b-a;
    a=b+a;
    b=a-b;
    cout<< " After swapping ";
    cout<<"a is "<<a<<" "<<" b is "<<b<<endl;
    getch();
}
