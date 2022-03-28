void main()
{
    int a,n;
    printf(" enter the no to calculate factorial ");
    scanf("%d",&n);
    a=fact(n);
    printf("factorial is %d",a);
    getch();
}
int fact(int n)
{
    int x=1,i;
    for(i=1;i<=n;i++)
        x=x*i;
        return x;
}
