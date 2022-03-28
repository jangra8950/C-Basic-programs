#include<conio.h>
#include<iostream>
using namespace std;

main()
{
    int l,b,n;
    do
    {
        cout<<" 1 for area of rectangle "<<endl;
        cout<<" 2 for area of square "<<endl;
        cout<<" 3 for exit "<<endl;
        cin>>n;
        switch(n)
        {
            case 1:
              cout<<" enter two no "<<endl;
              cin>>l>>b;
              cout<<" area of rectangle is "<<l*b<<endl;
              break;
            case 2:
              cout<<" enter side "<<endl;
              cin>>l;
              cout<<" area of square is "<<l*l<<endl;
              break;
            case 3:
              break;
            default:
            cout<<" wrong choice ";
            exit(1);
        }

    }while(n!=3);
    getch();
}
