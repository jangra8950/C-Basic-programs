
#include<cstring>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    char s1[20]="hello";
    char s2[20]="world";
    strncpy(s1,s2,2);
    cout<<s1;  //strncpy(destination address,source address,no of character)
    getch();
}
