
#include<conio.h>
#include<iostream>
using namespace std;
template<class T>
T maxi(T a,T b)  // T acts as default data type
{
    if(a>b)
        return a;
    else return b;
}
int main()
{
    cout<<maxi(10,6)<<endl;
    cout<<maxi(10.5,6.0)<<endl;
    cout<<maxi(10.2f,6.9f)<<endl;  //arguments must be same data type
    getch();
}
