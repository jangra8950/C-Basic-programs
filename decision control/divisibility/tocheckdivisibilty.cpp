#include<conio.h>
#include<iostream>
using namespace std;

main()
{

    int a;
    cout<< " enter the no to check divisibility by 5 ";
    cin>>a;
    if(a%5==0)
        cout<<a<<" is divisible ";
    else
        cout<< " Not divisible ";
    getch();

}
