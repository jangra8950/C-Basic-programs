main()
{
    int i,n,k,sum=0;
    printf(" enter no of which u want sum ");
    scanf("%d",&n);
    while(n)
    {
        k=n%10;
        sum=sum+k;
        n=n/10;
    }
    printf(" sum is %d",sum);
    getch();
}
