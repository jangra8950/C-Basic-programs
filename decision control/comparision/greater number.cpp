#include<conio.h>
#include<iostream>
using namespace std;

main()
{

    int a,b,c;
    cout<<" enter 3 no to find greatest ";
    cin>>a>>b>>c;
    if(a>b && a>c)   // 3 condition check , 2 relation operator and && operator
        cout<<" Greatest number is "<<a;
    else if( b>c)     // 4th here
        cout<<" Greatest number is "<<b;
    else
       cout<<" Greatest number is "<<c;
    getch();

}
