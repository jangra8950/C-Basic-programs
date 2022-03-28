#include<conio.h>
#include<iostream>
using namespace std;

class sorting
{
private:
    int i,n;
public:

  void input(int b[],int n)
{
    int i;
    cout<<" enter " <<n<< " numbers ";
    for(i=0;i<n;i++)
        cin>>b[i];
}
void display(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<b[i]<<endl;
}
void sort(int c[], int n)
{
    int i,r,t;
    for(r=0;r<n-1;r++)
    {
        for(i=0;i<n-1-r;i++)
            if(c[i]>c[i+1])
        {
            t=c[i];
            c[i]=c[i+1];
            c[i+1]=t;
        }
    }
}
};
int main()
{
    int a[20];
    sorting x;
    x.input(a,5);
    cout<<" sorted array is "<<endl;
    x.sort(a,5);
    x.display(a,5);
    cout<<endl;
    getch();
}

