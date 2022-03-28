main()
{
    int i,n;
    printf(" enter no to get prime factors ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
           printf("%d ",i);
            n=n/i;
        }
    }
    getch();
}
