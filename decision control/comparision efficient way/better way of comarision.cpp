#include<conio.h>
#include<iostream>
using namespace std;

 main()
{
    int a,b,c;
    cout<<" enter the three no ";
    cin>>a>>b>>c;
    if (a>b)     // 1st condition check
    {
        if(a>c)   //2nd condition check
            cout<<" Greatest number is "<<a;
        else
            cout<<" Greatest number is "<<c;
    }
    else
    {
        if(b>c)    // 3rd condition
           cout<<" Greatest number is "<<b;
        else
            cout<<" Greatest number is "<<c;
    }
    getch();
}
