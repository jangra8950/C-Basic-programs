#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    int a;
    cout<<" enter the no to check even odd ";
    cin>>a;
    if(a&1==1)
        cout<<a<<" is odd ";
    else
        cout<<a<<" is even ";
    getch();
}
