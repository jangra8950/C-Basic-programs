#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int a,b,lcm;
    cout<<" enter two no to find lcm ";
    cin>>a>>b;
    for(lcm=a>b?a:b;lcm<=a*b;lcm++)
    {
        if(lcm%a==0 && lcm%b==0)
        break;
    }
    cout<<" LCM is "<<lcm;
    getch();
}
