#include<conio.h>
#include<iostream>
using namespace std;

main()
{
    char ch;
    cout<<" enter alphabet to check it is vowel or not ";
    cin>>ch;
    switch(ch)
    {
    case 'a':
    case'A':
    case'e':
    case'E':
    case'I':
    case'i':
    case'O':
    case'o':
    case'U':
    case'u':
        cout<<ch<<" is a vowel ";
        break;
    default:
        cout<<ch<<" is not a vowel ";
    }
  getch();

}
