main()
{
    int i,n,k,sum=0;
    printf(" enter no upto which u want sum of squares of no ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=i*i;
        sum=sum+k;
    }
    printf(" sum is %d",sum);
    getch();
}
