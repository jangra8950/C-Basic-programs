void main()
{
    int n;
    printf(" enter the no ");
    scanf("%d",&n);
    nextprime(n);
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
void nextprime(int x)
{
    while(!prime(++x));
        printf("%d",x);
}
