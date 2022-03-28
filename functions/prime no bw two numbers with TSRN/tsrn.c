void main()
{
    int a,b;
    printf(" enter two no ");
    scanf("%d%d",&a,&b);
    rangeprime(a,b);
    getch();
}
int prime (int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
        return 0;
    return 1;
}
void rangeprime(int i,int u)
{
    int x;
    for(x=i+1;x<=u-1;x++)
        if(prime(x))
        printf("%d ",x);

}
