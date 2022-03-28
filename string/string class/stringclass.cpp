#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    string s;
    cout<<" enter a string ";
   // cin>>s; only one word
   getline(cin,s);
    cout<<s;
    getch();
}
