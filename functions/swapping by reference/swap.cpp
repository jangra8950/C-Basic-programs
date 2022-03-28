#include<conio.h>
#include<iostream>
using namespace std;
void swap(int &x, int &y)  // not recommended as it can not performs complex coding i.e loops
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a,b;
    cout<<" enter two numbers "<<endl;
    cin>>a>>b;
    cout<<" numbers before swap "<<endl;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<" numbers after swap "<<endl;
    cout<<a<<" "<<b;
    getch();
}
