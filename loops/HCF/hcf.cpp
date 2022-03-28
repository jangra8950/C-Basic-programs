#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int a,b,hcf;
    cout<<" enter two no to find hcf ";
    cin>>a>>b;
    for(hcf=a<b?a:b;hcf>=1;hcf--)
    {
        if(a%hcf==0 && b%hcf==0)
        break;
    }
    cout<<" HCF is "<<hcf;
    getch();
}
