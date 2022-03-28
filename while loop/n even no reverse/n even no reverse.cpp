#include<conio.h>
#include<iostream>
using namespace std;

main()
{

    int n;
    cout<< " Enter the number to get even numbers in reverse order ";
    cin>>n;
    while(n)
    {
        cout<<2*n<<" ";
        n--;
    }
    getch();
}
