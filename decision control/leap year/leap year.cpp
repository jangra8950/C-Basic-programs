#include<conio.h>
#include<iostream>
using namespace std;

main()
{
    int a;
    cout<<" enter the year ";
    cin>>a;
    if(a%400 == 0)
        cout<<a<< " is Leap year ";
    else if (a%100 == 0)
         cout<<a<< " is not Leap year ";
    else if (a%4 == 0)
         cout<<a<< " is Leap year ";
    else
         cout<<a<< " is not Leap year ";
    getch();
}
