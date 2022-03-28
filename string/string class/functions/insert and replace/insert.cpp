
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    string s="sil";
    s.insert(1,"ah");
    cout<<s<<endl;
    s.replace(1,4,"ourav"); // which means start from 1 index and replace next 4 index with given string
    cout<<s<<endl;
    string d="jangra";
    s.swap(d);
    cout<<s<<endl;
    cout<<d<<endl;
    getch();
}

