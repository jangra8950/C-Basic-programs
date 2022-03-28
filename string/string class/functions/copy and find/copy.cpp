
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    string str="sahil";
    char s[30];
    str.copy(s,str.length());
    cout<<s<<endl;
    cout<<str.find("ah");
    getch();
}
