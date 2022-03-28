void main()
{
    int n,x,a,sum=0;
    printf(" enter a number ");
    scanf("%d",&n);
    a=n;
    while(n)
    {
        x=n%10;
        sum=sum+x*x*x;
        n=n/10;
    }
    if(a==sum)
        printf(" armstrong number ");
    else
        printf(" not armstrong number ");
    getch();

}
