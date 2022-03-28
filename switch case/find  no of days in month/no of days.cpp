#include<conio.h>
#include<iostream>
using namespace std;

main()
{
    int n;
    cout<<" enter month no to find no of days in it ";
    cin>>n;
    switch(n)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 10:
    case 12:
    case 8:
        cout<<" numbers of days is 31";
        break;
    case 2:
        cout<<" numbers of days will be 28 or 29 ";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout<<" numbers of days is 30 " ;
        break;
    default:
        cout<<" u entered wrong month ";
    }
    getch();
}
