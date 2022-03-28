#include<cstring>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    char s1[20]="hello";
    char s2[20]="world";
    cout<<strncat(s1,s2,5);  //strncat(destination address,source address,no of character)
    getch();
}
