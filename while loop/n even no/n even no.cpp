#include<conio.h>
#include<iostream>
using namespace std;

main()
{

    int n,i=1;
    cout<< " Enter the number to get even numbers ";
    cin>>n;
    while(n)
    {
        cout<<2*i<< " ";
        i++;
        n--;
    }
    getch();
}
