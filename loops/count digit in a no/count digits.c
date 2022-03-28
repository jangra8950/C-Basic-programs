main()
{
    int i,n,k,sum=0;
    printf(" enter no of which u count digits ");
    scanf("%d",&n);
    while(n)
    {
        k=n%10;
        if(k)
        sum=sum+1;
        n=n/10;
    }
    printf(" sum is %d",sum);
    getch();
}
