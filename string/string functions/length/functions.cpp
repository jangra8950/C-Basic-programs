#include<cstring>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    char s[20];
    cout<<"enter a string ";
    cin.getline(s,20);
    cout<<"length "<<strlen(s)<<endl;
    cout<<strrev(s);
    getch();
}
