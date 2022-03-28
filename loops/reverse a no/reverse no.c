main()
{
    int i,n,k,no=0;
    printf(" enter no of which u want reverse ");
    scanf("%d",&n);
    while(n)
    {
        k=n%10;
        no=no*10+k;
        n=n/10;
    }
    printf(" no is %d",no);
    getch();
}
