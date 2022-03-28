
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
   cout<<"capacity is "<<s.capacity()<<endl;
   cout<<s<<endl;
   s.append(" good ");
   cout<<s<<endl;
   cout<<"capacity "<<s.capacity()<<endl;
   int b =s.length();
   cout<<"length of s is "<<b;
    getch();
    // s.resize(50)  it increases the size of s by 50
    // s.capacity    it shows how much values s stores
    // s.append("hello");
}
