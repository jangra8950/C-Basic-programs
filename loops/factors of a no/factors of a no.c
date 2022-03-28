main()
{
    int i,n;
    printf(" enter no to find its factors ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d ",i);
    }
    getch();
}
