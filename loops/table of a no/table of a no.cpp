#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    int i,n;
    cout<<" enter the no for table ";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    getch();

}
