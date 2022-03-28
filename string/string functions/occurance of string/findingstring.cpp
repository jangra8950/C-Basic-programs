#include<cstring>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    char s1[20]="programming";
    char s2[20]="gram";
    if(strstr(s1,s2)!=NULL)  // if string is not found the strstr gives null value
        cout<<(strstr(s1,s2));
    else
        cout<<"not found";
    getch();
}
    /*  to find a character
    strchr(s1,'m');
}
