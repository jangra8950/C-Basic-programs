#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    char s[20];
    cout<<" enter your name ";
    /* it takes only one word from keyboard
     cin>>s;
     */
     cin.getline(s,20);
    cout<<s;
    getch();
}
